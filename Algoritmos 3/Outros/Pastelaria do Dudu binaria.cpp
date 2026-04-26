#include<iostream>
#include<cstdlib>
using namespace std;

struct Produtos
{

    int codigo;
    string nome;
    int quantidades;
};

int main()
{
    Produtos dados[10];
    int n;
    int codigo;

    cout << "Digite o numero de produtos que deseja cadastrar:" << endl;
    cin >> n;

    system("cls");

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o nome do " << i+1 << " produto: " << endl;
        cin >> dados[i].nome;

        cout << "Digite a quantidade do " << i+1 << " produto: " << endl;
        cin >> dados[i].quantidades;

        dados[i].codigo = i + 1;

        system("cls");
    }

    for(int i = 0; i < n; i++)
    {
        cout << dados[i].codigo << " Produto: " << dados[i].nome << endl;
        cout << "Quantidade: " << dados[i].quantidades << endl;
        cout << endl;
    }


    cout << "Digite o codigo do produto que deseja verficar a disponibilidade: " << endl;
    cin >> codigo;

    for(int i = 0; i < n; i++)
    {
        if(codigo == dados[i].codigo && dados[i].quantidades > 0)
        {
            cout << "Produto: " << dados[i].nome << " em estoque!" << endl;
            break;
        }
        else if(codigo == dados[i].codigo && dados[i].quantidades <= 0)
        {
            cout << "Nao existe " << dados[i].nome << " em estoque." << endl;
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