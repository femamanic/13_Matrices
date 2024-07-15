#include <iostream>
using namespace std;

int main () {
    int n, A[100][100];
    float s = 0;
    cout << "Ingrese el orden de la matriz cuadrada: "; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "[" <<(i + 1) << "][" << (j + 1) << "]: "; cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                s = s + A[i][j];
            }
        }
    }
    cout << s << "\n";
}