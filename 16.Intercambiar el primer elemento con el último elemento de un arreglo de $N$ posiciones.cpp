#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int auxiliar;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    auxiliar = numeros[0];
    numeros[0] = numeros[9];
    numeros[9] = auxiliar;

    cout << "Arreglo nuevo:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}