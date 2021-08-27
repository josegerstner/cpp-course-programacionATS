/* 3. Hacer una matriz preguntando al usuario el número de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por último
mostrarla en pantalla. */

#include<iostream>

using namespace std;

int main() {
    int filas, columnas;

    cout<<"Digite el número de filas: ";
    cin>>filas; cin.ignore();
    cout<<"Digite el número de columnas: ";
    cin>>columnas; cin.ignore();

    int numeros[filas][columnas], copia[filas][columnas];

    // Ingresar datos
    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j]; cin.ignore();
        }
    }


    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            copia[i][j] = numeros[i][j];
        }
    }

    cout<<"\nLa copia de la matriz ingresada es: "<<endl;

    for(int i=0; i<filas;i ++){
        cout<<"[ ";
        for(int j=0; j<columnas; j++){
            cout<<copia[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    getchar();
    return 0;
}