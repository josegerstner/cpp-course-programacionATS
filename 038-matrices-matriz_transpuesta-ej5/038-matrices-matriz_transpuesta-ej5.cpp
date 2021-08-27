/* 5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz transpuesta es aquella en la que la columna i era la fila i de la matriz
original:
[1 2 3]     [1 4 7]
[4 5 6] --> [2 5 8]
[7 8 9]     [3 6 9]
 */

#include<iostream>

using namespace std;

int main() {
    int filas = 3, columnas = 3;

    // cout<<"Digite el número de filas: ";
    // cin>>filas; cin.ignore();
    // cout<<"Digite el número de columnas: ";
    // cin>>columnas; cin.ignore();

    int numeros[filas][columnas];

    // Ingresar datos
    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j]; cin.ignore();
        }
    }

    cout<<"\nMatriz original:"<<endl;
    for(int i=0; i<filas;i ++){
        cout<<"[ ";
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    cout<<"\nMatriz transpuesta:"<<endl;
    for(int i=0; i<filas;i ++){
        cout<<"[ ";
        for(int j=0; j<columnas; j++){
            cout<<numeros[j][i]<<" ";
        }
        cout<<"]"<<endl;
    }

    getchar();
    return 0;
}