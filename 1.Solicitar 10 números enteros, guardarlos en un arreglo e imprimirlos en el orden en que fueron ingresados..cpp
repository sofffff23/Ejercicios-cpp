#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros ingresados:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}