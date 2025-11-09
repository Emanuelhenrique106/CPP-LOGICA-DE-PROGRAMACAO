
#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, media;

    // Entrada dos valores dos tres numeros  
    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;

    // Cálculo da média aritmética
    media = (num1 + num2 + num3) / 3;

    // Exibição do resultado da media aritmetica
    cout << "A media aritmetica dos tres numeros e: " << media << endl;

    return 0;
}