#include <iostream>
using namespace std;

int main () {
    int s = 0, n, A[100][100];
    cout << "Ingrese el orden de la matriz cuadrada: "; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "[" <<(i + 1) << "][" << (j + 1) << "]: "; cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        s = s + A[i][n - 1 - i];
    }
    cout << "La sumatoria de los elementos de la diagonal secundaria es: " << s << "\n";
    return 0;
}