#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];

        suma = suma + numeros[i];
    }

    cout << "La suma es: " << suma;

    return 0;
}