#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Gladiadores
{
    string nome;
    int forca;
    int habilidade;
    int idade;
    int vida;
};


int main()
{

    Gladiadores dados[10];

    for(int i = 0; i < 5; i++)
    {
        cout << "Digite o nome do " << i + 1 << " gladiador: " << endl;
        cin >> dados[i].nome;
        
       do {
        cout << "Digite a forca do " << i + 1 << " gladiador (0-10): " << endl;
        cin >> dados[i].forca;

        cout << "Digite a habilidade do " << i + 1 << " gladiador (0-10):" << endl;
        cin >> dados[i].habilidade;

        if(dados[i].forca < 0 || dados[i].forca > 10 || dados[i].habilidade < 0 || dados[i].habilidade > 10)
        {
            cout << "Valor invalido. A forca e a habilidade devem ser entre 0 e 10." << endl;  
        }

        } while(dados[i].forca < 0 || dados[i].forca > 10 || dados[i].habilidade < 0 || dados[i].habilidade > 10);

        cout << "Digite a idade do " << i + 1 << " gladiador: " << endl;
        cin >> dados[i].idade;

        dados[i].vida = 100;

        system("cls");
    }
    for(int i = 0; i < 5; i++)
    {
        cout << "Gladiador: " << dados[i].nome << endl;
        cout << "Forca: " << dados[i].forca << endl;
        cout << "Habilidade: " << dados[i].habilidade << endl;
        cout << "Idade: " << dados[i].idade << endl;
        cout << "Vida: " << dados[i].vida << endl;
        cout << endl;
    }
    
    string nomes[5];
    bool encontrado;
    int g1, g2 = -1;
    bool run = true;
    int n;


    while (run == true)
    {
        do
        {
        
            cout << "Deseja iniciar a luta? (1 - Sim, -1 - Nao): " << endl;
            cin >> n;

            if(n != 1 && n != -1)
            {
                cout << "Valor invalido. Digite 1 para iniciar a luta ou -1 para sair." << endl;
            }
            if(n == -1)
            {
                system("cls");
                cout << "Encerrando o programa." << endl;
                break;
            }
            
        } while (n != 1 && n != -1);

        cin >> nomes[0];

        do{
            encontrado = false;
            for(int i = 0; i < 5; i++)
            {
                if(dados[i].nome == nomes[0])
                {
                    encontrado = true;
                    g1 = i;
                    break;
                }
            }
            if(!encontrado)
            {
                cout << "Gladiador nao encontrado. Digite novamente: " << endl;
                cin >> nomes[0];
            }

        } while(!encontrado);
        
        cout << "Digite o nome do 2 gladiador para a luta: " << endl;
        cin >> nomes[1];

        do{
            encontrado = false;
            for(int i = 0; i < 5; i++)
            {
                if(dados[i].nome == nomes[1])
                {
                    encontrado = true;
                    g2 = i;
                    break;
                }
            }
            if(!encontrado)
            {
                cout << "Gladiador nao encontrado. Digite novamente: " << endl;
                cin >> nomes[1];
            }
        } while(!encontrado);

        system("cls");

        int dano1 = dados[g1].forca + pow(2, dados[g1].habilidade);
        int dano2 = dados[g2].forca + pow(2, dados[g2].habilidade);

        while(dados[g1].vida > 0 && dados[g2].vida > 0)
        {
            dados[g2].vida -= dano1;
            if(dados[g2].vida <= 0)
            {
                cout << "O vencedor e: " << dados[g1].nome << endl;
                break;
            }

            dados[g1].vida -= dano2;
            if(dados[g1].vida <= 0)
            {
                cout << "O vencedor e: " << dados[g2].nome << endl;
                break;
            }
        }
    
    }
    
return 0;
}