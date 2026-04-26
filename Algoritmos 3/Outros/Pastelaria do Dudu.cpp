#include<iostream>
#include<cstdlib>
using namespace std;

struct Produtos
{
    string nome;
    int quantidades;
};

int main()
{
    Produtos dados[10];
    int n;
    string nome;

    cout << "Digite o numero de produtos que deseja cadastrar:" << endl;
    cin >> n;

    system("cls");

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o nome do " << i+1 << " produto: " << endl;
        cin >> dados[i].nome;

        cout << "Digite a quantidade do " << i+1 << " produto: " << endl;
        cin >> dados[i].quantidades;

        system("cls");
    }

    cout << "Digite o nome do produto que deseja verficar a disponibilidade: " << endl;
    cin >> nome;

    for(int i = 0; i < n; i++)
    {
        if(dados[i].nome == nome && dados[i].quantidades > 0)
        {
            cout << "Produto: " << dados[i].nome << " em estoque!" << endl;
            break;
        }
        else if(dados[i].nome == nome && dados[i].quantidades <= 0)
        {
            cout << "Não existe " << dados[i].nome << " em estoque." << endl;
            break;
        }
        if(i == n-1)
        {
            cout << "Produto nao encontrado." << endl;
        }


    }

    // complexidade O(n) para verificar a disponibilidade do produto, onde n é o número de produtos cadastrados.
    return 0;
};