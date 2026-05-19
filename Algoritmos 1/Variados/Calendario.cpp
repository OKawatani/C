#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Evento {
    string descricao;
    string data;
    string tipo; // Tipo do evento (prova, feriado, etc.)
};

void adicionarEvento(vector<Evento>& calendario) {
    Evento novoEvento;
    cout << "Digite a descricao do evento: ";
    getline(cin >> ws, novoEvento.descricao); // Usamos getline para pegar a descrição com espaços

    cout << "Digite a data do evento (formato DD/MM/YYYY): ";
    getline(cin >> ws, novoEvento.data); // Usamos getline para pegar a descrição com espaços

    cout << "Digite o tipo do evento (ex: Prova, Feriado, etc.): ";
    getline(cin >> ws, novoEvento.tipo); // Usamos os ws para descartar o máximo de caracteres de espaço em branco

    calendario.push_back(novoEvento);
    cout << "Evento adicionado com sucesso!" << endl;
}

void mostrarEventos(const vector<Evento>& calendario) {
    cout << "Calendario Academico:" << endl;
    cout << "--" << endl;
    for (const Evento& evento:calendario){
        cout << "Descricao: " << evento.descricao << ", Data: " << evento.data << ", Tipo: " << evento.tipo << endl;
    }
    cout << endl;
}

void alterarDataEvento(vector<Evento>& calendario) {
    int indice;
    cout << "Digite o indice do evento que deseja alterar: ";
    cin >> indice;

    if (indice >= 0 && indice < calendario.size()) {
        cout << "Digite a nova data do evento (formato DD/MM/YYYY): ";
        getline(cin >> ws, calendario[indice].data);
        cout << "Data do evento alterada com sucesso." << endl;
    } else {
        cout << "Indice de evento invalido." << endl;
    }
}

int main() {
    vector<Evento> calendario;

    int opcao;
    do {
        cout << "--" << endl;
        cout << "1. Adicionar evento" << endl;
        cout << "2. Mostrar eventos" << endl;
        cout << "3. Alterar data de evento" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(); // para nao dar o problema q o professor comentou

        switch (opcao) {
            case 1:
                adicionarEvento(calendario);
                break;
            case 2:
                mostrarEventos(calendario);
                break;
            case 3:
                alterarDataEvento(calendario);
                break;
            case 4:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}