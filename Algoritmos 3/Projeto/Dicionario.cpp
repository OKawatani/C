#include <iostream>
#include <cstdlib>
using namespace std;

void cadastrarPalavra() {
    cout << "Funcionalidade em construcao\n";
}

void listarSignificados() {
    cout << "Funcionalidade em construcao\n";
}

void listarSinonimos() {
    cout << "Funcionalidade em construcao\n";
}

void listarOrdemAlfabetica() {
    cout << "Funcionalidade em construcao\n";
}

void listarPorTamanho() {
    cout << "Funcionalidade em construcao\n";
}

void removerPalavra() {
    cout << "Funcionalidade em construcao\n";
}

void calcularSimilaridade() {
    cout << "Funcionalidade em construcao\n";
}

int main() {
    int opcao;

    do {
        system("cls");

        cout << "===== MENU =====\n";
        cout << "1. Cadastrar palavra\n";
        cout << "2. Listar significados de uma palavra\n";
        cout << "3. Listar sinonimos de uma palavra\n";
        cout << "4. Listar palavras em ordem alfabetica\n";
        cout << "5. Listar palavras por tamanho\n";
        cout << "6. Remover palavra\n";
        cout << "7. Calcular similaridade entre duas palavras\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        system("cls");

        switch(opcao) {
            case 1: cadastrarPalavra(); break;
            case 2: listarSignificados(); break;
            case 3: listarSinonimos(); break;
            case 4: listarOrdemAlfabetica(); break;
            case 5: listarPorTamanho(); break;
            case 6: removerPalavra(); break;
            case 7: calcularSimilaridade(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opcao invalida!\n";
        }

        if(opcao != 0) {
            cout << "\nPressione qualquer tecla para voltar ao menu...";
            cin.ignore();
            cin.get();
        }

    } while(opcao != 0);

    return 0;
}