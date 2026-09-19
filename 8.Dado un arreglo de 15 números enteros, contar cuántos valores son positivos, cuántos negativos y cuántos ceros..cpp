#include <iostream>
using namespace std;

int main() {
    int numeros[15];
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros;

    return 0;
}