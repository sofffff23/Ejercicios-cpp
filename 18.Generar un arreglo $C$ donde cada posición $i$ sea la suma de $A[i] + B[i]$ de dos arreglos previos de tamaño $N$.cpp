#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ingresa A[" << i << "]: ";
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "Ingresa B[" << i << "]: ";
        cin >> B[i];
    }

    for (int i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    cout << "Resultado:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << C[i] << " ";
    }

    return 0;
}