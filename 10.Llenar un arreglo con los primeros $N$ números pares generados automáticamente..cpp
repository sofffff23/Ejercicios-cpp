#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingresa N: ";
    cin >> N;

    int numeros[N];

    for (int i = 0; i < N; i++) {
        numeros[i] = (i + 1) * 2;
    }

    cout << "Numeros pares:" << endl;

    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}