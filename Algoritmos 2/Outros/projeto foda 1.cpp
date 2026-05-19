#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Enumeração para representar o tipo de usuário
enum TipoUsuario {
    ALUNO,
    PROFESSOR
};

// Definição da struct para armazenar os dados do usuário
struct Usuario {
    string email;
    string senha;
    TipoUsuario tipo;
};

// Função para cadastrar um novo usuário
void cadastrarUsuario() {
    Usuario novoUsuario;
    cout << "Digite seu email: ";
    cin >> novoUsuario.email;
    
    cout << "Digite sua senha: ";
    cin >> novoUsuario.senha;
    
    cout << "Selecione o tipo de usuário (0 - Aluno, 1 - Professor): ";
    int tipoUsuario;
    cin >> tipoUsuario;
    novoUsuario.tipo = static_cast<TipoUsuario>(tipoUsuario);
    
    // Confirmação de senha
    string confirmacaoSenha;
    cout << "Confirme sua senha: ";
    cin >> confirmacaoSenha;
    
    // Verifica se a senha e a confirmação são iguais
    if (novoUsuario.senha != confirmacaoSenha) {
        cout << "As senhas não coincidem. Tente novamente." << endl;
        return;
    }
    
    // Abre o arquivo de usuários para escrita, no modo de append (adicionar ao final do arquivo)
    ofstream arquivoUsuarios("usuarios.txt", ios::app);
    
    // Verifica se o arquivo foi aberto corretamente
    if (!arquivoUsuarios.is_open()) {
        cerr << "Erro ao abrir o arquivo de usuários." << endl;
        return;
    }
    
    // Escreve os dados do novo usuário no arquivo
    arquivoUsuarios << novoUsuario.email << " " << novoUsuario.senha << " " << novoUsuario.tipo << endl;
    
    cout << "Cadastro realizado com sucesso!" << endl;
    
    // Fecha o arquivo
    arquivoUsuarios.close();
}

// Função para verificar o login de um usuário
bool fazerLogin(TipoUsuario& tipoUsuario) {
    string email, senha;
    cout << "Digite seu email: ";
    cin >> email;
    
    cout << "Digite sua senha: ";
    cin >> senha;
    
    // Abre o arquivo de usuários para leitura
    ifstream arquivoUsuarios("usuarios.txt");
    
    // Verifica se o arquivo foi aberto corretamente
    if (!arquivoUsuarios.is_open()) {
        cerr << "Erro ao abrir o arquivo de usuários." << endl;
        return false;
    }
    
    // Variáveis temporárias para armazenar os dados lidos do arquivo
    string tempEmail, tempSenha;
    int tempTipo;
    bool loginSucesso = false;
    
    // Lê os dados do arquivo e verifica se há correspondência com o email e senha fornecidos
    while (arquivoUsuarios >> tempEmail >> tempSenha >> tempTipo) {
        if (tempEmail == email && tempSenha == senha) {
            loginSucesso = true;
            tipoUsuario = static_cast<TipoUsuario>(tempTipo);
            break;
        }
    }
    
    // Fecha o arquivo
    arquivoUsuarios.close();
    
    // Verifica se o login foi bem sucedido
    if (loginSucesso) {
        cout << "Login realizado com sucesso!" << endl;
        return true;
    } else {
        cout << "Email ou senha incorretos. Tente novamente." << endl;
        return false;
    }
}

// Função para a área do aluno
void areaAluno() {
    cout << "Bem-vindo à área do aluno!" << endl;
    // Aqui você pode adicionar o código para a área do aluno
    
    cout << "froes paia" << endl;
    
    
}

// Função para a área do professor
void areaProfessor() {
    cout << "Bem-vindo à área do professor!" << endl;
    // Aqui você pode adicionar o código para a área do professor
    cout << "professor foda" << endl;
}

// Função para simular o acesso a um site
void acessarSite(bool usuarioLogado, TipoUsuario tipoUsuario) {
    if (usuarioLogado) {
        if (tipoUsuario == ALUNO) {
            areaAluno();
        } else if (tipoUsuario == PROFESSOR) {
            areaProfessor();
        }
    } else {
        cout << "Você precisa estar logado para acessar o site." << endl;
    }
}

int main() {
    int opcao;
    TipoUsuario tipoUsuario;
    bool usuarioLogado = false;
    
    setlocale(LC_ALL, "Portuguese");
    
    do {
        cout << "Selecione uma opção:" << endl;
        cout << "1. Cadastrar usuário" << endl;
        cout << "2. Fazer login" << endl;
        cout << "3. Acessar o site" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                cadastrarUsuario();
                break;
            case 2:
                usuarioLogado = fazerLogin(tipoUsuario);
                break;
            case 3:
                acessarSite(usuarioLogado, tipoUsuario);
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
