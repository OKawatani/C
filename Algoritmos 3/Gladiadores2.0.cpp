#include<iostream>
#include<cstdlib>
using namespace std;

struct Gladiador{
   	string nome;
   	int forca, habilidade, idade, vida;
};

int potencia(int base, int exp) {
	if (exp == 0) return 1;
	if (exp == 1) return base;
	return base * potencia(base, exp - 1);
}

int ataque(Gladiador gladiador) {
	return gladiador.forca + potencia(2, gladiador.habilidade);
}

bool combate(Gladiador gladiador1, Gladiador gladiador2) {
	while (gladiador1.vida > 0 && gladiador2.vida > 0) {
		gladiador2.vida -= ataque(gladiador1);
		gladiador1.vida -= ataque(gladiador2);
	}
	if (gladiador2.vida <= 0) return true;
	else return false;
}

int main(){
	string nome;
	int forca, habilidade, idade, gladiador1, gladiador2, cond, i = 0;
	bool swtich1 = false, swtich2 = false;
    Gladiador gladiadores[1000];
    
    while(1)
    {
        cout << "Escolha uma opcao:" << endl;
        cout << "1 - Cadastre um gladiador" << endl;
        cout << "2 - Fazer uma batalha entre dois gladiadores" << endl;
        cout << "3 - Sair" << endl;
        cin >> cond;
        
        if(cond == 1)
        {;
          
		    cin >> nome >> forca >> habilidade >> idade;
		    gladiadores[i] = {nome, forca, habilidade, idade, 100};
	        i++;
            system("cls");
            cout << "Gladiadores cadastrados com sucesso!" << endl;
            if(swtich1 == true)
            {
                swtich2 = true;
            }
            if(swtich1 == false)
            {
                swtich1 = true;
            }
            
            
        }

        if(cond == 2 && swtich2 == false)
        {
            cout << "Gladiadores insuficientes para realizar uma batalha." << endl;
        }

        if(cond == 2 && swtich2 == true)
        {
            cout << "Digite os indices dos gladiadores: ";
            cin >> gladiador1 >> gladiador2;

            if (gladiador1 >= 0 && gladiador1 < i && gladiador2 >= 0 && gladiador2 < i)
            {
                if (combate(gladiadores[gladiador1], gladiadores[gladiador2])) 
                {
                    system("cls");
                    cout << gladiadores[gladiador1].nome << " ganhou a batalha contra " << gladiadores[gladiador2].nome << "." << endl;
                }   
                else 
                {
                    system("cls");
                    cout << gladiadores[gladiador2].nome << " ganhou a batalha contra " << gladiadores[gladiador1].nome << "." << endl;
                }
            }
            else
            {
            cout << "Indice invalido!" << endl;
            }
        }

        if(cond == 3)
        {
            system("cls");
            cout << "Encerrando o programa." << endl;
            break;
        }

    }
    
	
	return 0;
}
