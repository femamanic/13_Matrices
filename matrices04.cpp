#include <iostream>
using namespace std;

int main () {
    int vS[7][4];
    system ("cls");
    for (int j = 0; j < 4; j++) {
        cout << "Ingrese las ventas de la semana " << (j + 1) << ":\n";
        for (int i = 0; i < 7; i++) {
            if (i == 0) {
                cout << "Lunes: "; cin >> vS[i][j];
            }
            if (i == 1) {
                cout << "Martes: "; cin >> vS[i][j];
            }
            if (i == 2) {
                cout << "Miercoles: "; cin >> vS[i][j];
            }
            if (i == 3) {
                cout << "Jueves: "; cin >> vS[i][j];
            }
            if (i == 4) {
                cout << "Viernes: "; cin >> vS[i][j];
            }
            if (i == 5) {
                cout << "Sabado: "; cin >> vS[i][j];
            }
            if (i == 6) {
                cout << "Domingo: "; cin >> vS[i][j];
            }
        }
    }
    system ("pause>nul");
    return 0;
}
