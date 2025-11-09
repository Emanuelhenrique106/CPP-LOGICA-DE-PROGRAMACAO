#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // operador % calcula o resto da divisao por 2
    if (numero % 2 == 0) {
        cout << "0" << endl; // número é par
    } else {
        cout << "1" << endl; // número é ímpar
    }

    return 0;
