#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 10; i += 2) {
        suma = suma + numeros[i];
    }

    cout << "La suma es: " << suma;

    return 0;
}