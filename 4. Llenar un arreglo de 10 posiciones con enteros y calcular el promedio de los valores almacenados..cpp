#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    float suma = 0;
    float promedio;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];

        suma = suma + numeros[i];
    }

    promedio = suma / 10;

    cout << "El promedio es: " << promedio;

    return 0;
}