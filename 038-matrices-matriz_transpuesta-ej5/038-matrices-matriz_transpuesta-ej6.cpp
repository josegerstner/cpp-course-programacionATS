/* 5. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3 */

#include<iostream>

using namespace std;

int main() {
    int filas = 3, columnas = 3;

    // cout<<"Digite el número de filas: ";
    // cin>>filas; cin.ignore();
    // cout<<"Digite el número de columnas: ";
    // cin>>columnas; cin.ignore();

    int matriz1[filas][columnas], matriz2[filas][columnas];

    // Ingresar datos
    cout<<"\nIngresando números en la primera matriz"<<endl;
    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un número m1["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j]; cin.ignore();
        }
    }
    cout<<"\nIngresando números en la segunda matriz"<<endl;
    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un número m2["<<i<<"]["<<j<<"]: ";
            cin>>matriz2[i][j]; cin.ignore();
        }
    }

    cout<<"\nLa suma de las matrices es: "<<endl;

    for(int i=0; i<filas;i ++){
        cout<<"[ ";
        for(int j=0; j<columnas; j++){
            cout<<matriz1[i][j] + matriz2[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    getchar();
    return 0;
}