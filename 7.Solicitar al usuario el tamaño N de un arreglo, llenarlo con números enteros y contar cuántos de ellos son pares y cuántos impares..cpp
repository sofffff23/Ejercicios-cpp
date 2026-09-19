#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares;

    return 0;
}