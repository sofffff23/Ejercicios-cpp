#include <iostream>
using namespace std;

int main() {
    int A[10];
    int B[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa A[" << i << "]: ";
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++) {
        B[i] = A[i];
    }

    cout << "Arreglo B:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }

    return 0;
}