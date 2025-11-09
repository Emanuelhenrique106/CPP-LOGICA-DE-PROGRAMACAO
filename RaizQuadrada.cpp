#include <iostream>
#include <cmath> // Biblioteca necessária para pow() e sqrt()
using namespace std;

int main() {
    double numero;

    // Entrada de dados
    cout << "Digite um numero real: ";
    cin >> numero;

    // Verifica se o número é positivo
    if (numero > 0) {
        double quadrado = pow(numero, 2); // Função pow(base, expoente)
        double raiz = sqrt(numero);       // Função sqrt(valor)

        cout << "\nNumero digitado: " << numero << endl;
        cout << "Quadrado do numero: " << quadrado << endl;
        cout << "Raiz quadrada do numero: " << raiz << endl;
    } 
    else {
        cout << "\nO numero nao eh positivo. Nao foi possivel realizar os calculos." << endl;
    }

    return 0;
}