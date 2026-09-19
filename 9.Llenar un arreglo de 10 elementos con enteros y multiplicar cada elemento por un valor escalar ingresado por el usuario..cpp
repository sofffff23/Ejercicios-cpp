#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int escalar;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Ingresa el escalar: ";
    cin >> escalar;

    for (int i = 0; i < 10; i++) {
        numeros[i] = numeros[i] * escalar;
    }

    cout << "Resultado:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}