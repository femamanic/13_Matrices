#include <iostream>
using namespace std;

string dias[7] = {"(L)", "(M)", "(M)", "(J)", "(V)", "(S)", "(D)"};

int main () {
    float vS[7][4], sS[4], sM = 0;
    for (int j = 0; j < 4; j++) {
        system ("cls");
        float s = 0;
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
            s = s + vS[i][j];
        }
        sS[j] = s;
        sM = sM + sS[j];
    }
    system ("cls");
    cout << "Ventas de cuatro semanas:\n";
    cout << "------------------------------------------------------------\n";
    cout << "Sem1\tSem2\tSem3\tSem4\t\n"; 
    for (int i = 0; i < 7; i++) {
        cout << dias[i] << "\t";
        for (int j = 0; j < 4; j++) {
            cout << vS[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "------------------------------------------------------------\n";

    for (int j = 0; j < 4; j++) {
        cout << "   \t" << sS[j] << " ";
    }
    cout << "\nVenta total del mes: " << sM << "\n";
    system ("pause>nul");
    return 0;
}
