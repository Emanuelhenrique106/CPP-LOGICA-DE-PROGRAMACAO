#include <iostream>
using namespace std;

int main() {
    double C, F, K; // Declara variáveis do tipo double (permite casas decimais)

    // Entrada de dados
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> C;

    // Conversões
    F = C * (9.0 / 5.0) + 32.0; // Celsius para Fahrenheit
    K = C + 273.15;             // Celsius para Kelvin

    // Saída dos resultados
    cout << "\nTemperatura em diferentes escalas:" << endl;
    cout << "Fahrenheit: " << F << " °F" << endl;
    cout << "Kelvin: " << K << " K" << endl;

    return 0;
}