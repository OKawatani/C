#include <iostream> // Inclui a biblioteca para entrada e saída de dados
#include <list>     // Inclui a biblioteca para usar listas (estrutura de dados)
#include <string>   // Inclui a biblioteca para manipulação de strings
using namespace std; // Permite usar os elementos do namespace std sem precisar prefixá-los com "std::"

int main() {
    int n; // Declara uma variável para armazenar o número de usuários
    cin >> n; // Lê o número de usuários
    cin.ignore(); // Ignora o caractere '\n' que sobra no buffer após a leitura de 'n'

    string nomes[n]; // Declara um array de strings para armazenar os nomes dos usuários
    for (int i = 0; i < n; i++) { // Loop para ler os nomes dos usuários
        getline(cin, nomes[i]); // Lê uma linha inteira (nome do usuário) e armazena no array
    }

    // Lista de adjacência com listas
    list<int> segue[n]; // Declara um array de listas para representar quem cada usuário segue

    for (int i = 0; i < n; i++) { // Loop para preencher a lista de adjacência
        int id; // Declara uma variável para armazenar o ID do usuário seguido
        while (cin >> id && id != -1) { // Lê IDs até encontrar -1 (indicador de fim)
            segue[i].push_back(id); // Adiciona o ID à lista de quem o usuário 'i' segue
        }
    }

    int procurado; // Declara uma variável para armazenar o ID do usuário procurado
    cin >> procurado; // Lê o ID do usuário procurado

    // Verifica quem segue o usuário 'procurado'
    for (int i = 0; i < n; i++) { // Loop para percorrer todos os usuários
        for (int id : segue[i]) { // Loop para percorrer a lista de quem o usuário 'i' segue
            if (id == procurado) { // Verifica se o usuário 'i' segue o usuário procurado
                cout << nomes[i] << endl; // Imprime o nome do usuário que segue o procurado
                break; // Evita imprimir duplicado se o usuário seguir mais de uma vez
            }
        }
    }

    return 0; // Indica que o programa terminou com sucesso
}