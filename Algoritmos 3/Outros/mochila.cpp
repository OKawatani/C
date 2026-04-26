#include<iostream>
using namespace std;

struct Item{
int valor;
int peso;
};

int potencia(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * potencia(x, y - 1);
}

Item itens[] = {
        {2, 20},
        {4, 50},
        {3, 30},
        {5, 100}
    };

int main()
{
    int capacidade = 9, quantidade = 4, combinacoes, maior = 0, posicao_maior, valor_acumulado, peso_acumulado;


    //Solução por força bruta, onde o algoritmo irá calcular o valor acumulado e peso acumulado de cada combinação possível, e verificar qual é a melhor combinação possível, ou seja, aquela que tem o maior valor acumulado sem ultrapassar a capacidade da mochila.
    combinacoes = potencia(2, quantidade);

    for(int i = 0; i < combinacoes; i++)
    {
        valor_acumulado = 0, peso_acumulado = 0;
        for(int j = 0; j<quantidade; j++)
        {
            int aux = i;
            while(aux != 0)
            {
                //Calculo do valor acumulado e peso acumulado
                if(peso_acumulado > capacidade)
                {
                    valor_acumulado = 0;
                }
            }
            
        } 
        
        if(valor_acumulado > maior)
        {
            maior = valor_acumulado;
            posicao_maior  = i;
        }

        cout << "Solução por força bruta: " << maior << endl;
        cout << "Itens: " << posicao_maior << endl;

        //Solução gulosa 
        valor_acumulado = 0, peso_acumulado = 0;
        
        for(int j = 0; j<quantidade; j++)
        {
            if(peso_acumulado + itens[j].peso <= capacidade)
            {
                valor_acumulado += itens[j].valor;
                peso_acumulado += itens[j].peso;
                cout << "Item escolhido: " << i << endl;
            }
        }

        cout << "Solução gulosa: " << valor_acumulado << endl;
    }

    //Solução por programação dinâmica, onde o algoritmo irá criar uma matriz de tamanho (quantidade + 1) x (capacidade + 1), onde cada posição da matriz irá representar o valor máximo que pode ser obtido com uma determinada quantidade de itens e uma determinada capacidade da mochila. O algoritmo irá preencher a matriz de acordo com as seguintes regras:

    








    return 0;
}