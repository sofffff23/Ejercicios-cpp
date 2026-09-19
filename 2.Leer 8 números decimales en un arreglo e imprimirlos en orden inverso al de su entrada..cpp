#include <iostream>
using namespace std;

int main() {
    int numeros[8];

    for (int i = 0; i < 8; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros en orden inverso:" << endl;

    for (int i = 7; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    return 0;
}