
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matriz;
int filas = 0;
int columna = 0;

void crear_matriz() {
    cout << "Arme la base de datos" << endl;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columna;
}

void modificar_matriz(int filas, int columna) {
    matriz.clear();

    for (int i = 0; i < filas; i++) {
        vector<int> fila;

        cout << "Ingrese los datos de la fila " << i + 1 << endl;

        for (int j = 0; j < columna; j++) {
            int dato;

            cout << "Ingrese el dato de la posicion " << j + 1 << ": ";
            cin >> dato;

            fila.push_back(dato);
        }

        matriz.push_back(fila);
    }

    cout << "La matriz es:" << endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columna; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int opc;

    while (true) {
        cout << "\nIngrese la opcion a realizar" << endl;
        cout << "1. Crear matriz" << endl;
        cout << "2. Definir los datos de la matriz" << endl;
        cout << "3. Mostrar matriz" << endl;
        cout << "4. Salir" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opc;

        if (opc == 1) {
            crear_matriz();

        } else if (opc == 2) {
            if (filas > 0 && columna > 0) {
                modificar_matriz(filas, columna);
            } else {
                cout << "Debe ingresar las dimensiones primero" << endl;
            }

        } else if (opc == 3) {
            if (matriz.empty()) {
                cout << "La matriz esta vacia" << endl;
            } else {
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columna; j++) {
                        cout << matriz[i][j] << "\t";
                    }
                    cout << endl;
                }
            }

        } else if (opc == 4) {
            cout << "Programa finalizado" << endl;
            break;

        } else {
            cout << "Opcion incorrecta" << endl;
        }
    }

    return 0;
}
