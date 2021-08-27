/* 7. Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
es simétrica si es cuadrada y si es igual a su matriz transpuesta. 

[8 1 3]     [8 1 3]
[1 7 4] --> [1 7 4]
[3 4 9]     [3 4 9]     

*/

#include<iostream>

using namespace std;

int main() {
    int filas, columnas, counter=0;
    char bandera='F';

    cout<<"Digite el número de filas: ";
    cin>>filas; cin.ignore();
    cout<<"Digite el número de columnas: ";
    cin>>columnas; cin.ignore();

    int numeros[filas][columnas];//, matriz2[filas][columnas];

    // Ingresar datos
    cout<<"\nIngresando números en la primera matriz"<<endl;
    for(int i=0; i<filas;i ++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un número m1["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j]; cin.ignore();
        }
    }

    if(filas==columnas){
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(numeros[i][j] == numeros[j][i]){
                    counter++;
                }
            }
        }

        if(counter==filas*columnas){
            cout<<"\nLa matriz es simétrica"<<endl;
        } else {
            cout<<"\nLa matriz NO es simétrica"<<endl;
        }
    } else {
        cout<<"\nNo es una matriz cuadrada."<<endl;
    }



    getchar();
    return 0;
}