#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // Declaração das variáveis i, j, soma e diferenca
    int i, j, soma, diferenca;
    
    // Entrada dos valores de i e j usar cin para dar a entrada
    cout << "Informe um valor de i: ";
    cin >> i;
    cout << "Informe um valor de j: ";
    cin >> j;
    // Cálculo da soma e da e calculo da diferença de quem é maior
    soma = i + j;
    diferenca = i - j;

    // Estruturas condicionais para comparar o i e o j e exibir quem é maior ou se são iguais
    if (i > j)
        cout << "i e maior que j \n";
    if (i < j)
        cout << "j e maior que i \n";
    if (i == j)
        cout << "i e igual a j \n";

    // Resultados finais da soma e da diferença das variáveis
    cout << "A soma dos dois valores e: " << soma << endl;
    cout << "A diferenca entre eles e: " << diferenca << endl;

    return 0;
}