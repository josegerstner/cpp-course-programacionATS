/* 1. Hacer un programa para rellenar una matriz pidiendo al usuario el número
de filas y columnas. Posteriormente mostrar la matriz en pantalla */

#include<iostream>

using namespace std;

int main() {
    int filas, columnas;

    cout<<"Digite el número de filas: ";
    cin>>filas; cin.ignore();
    cout<<"Digite el número de columnas: ";
    cin>>columnas; cin.ignore();

    int numeros[filas][columnas];

    // Almacenando números en la matrix
    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j]; cin.ignore();
        }
    }

    cout<<"\nLa matriz es:"<<endl;
    // Mostrando la matrix
    for(int i=0; i<filas;i ++){
        cout<<"[";
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j];
            if(j<(columnas-1)){
                cout<<" ";
            }
        }
        cout<<"]"<<endl;
    }

    getchar();
    return 0;
}