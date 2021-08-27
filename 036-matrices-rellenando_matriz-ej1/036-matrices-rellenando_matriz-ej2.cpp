/* 2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo
para que muestre la diagonal principal de la matriz */

#include<iostream>

using namespace std;

int main() {
    int numeros[3][3] = {1,2,3,  4,5,6,  7,8,9};

    // Almacenando números en la matrix
    cout<<"\nLa matriz es:"<<endl;
    // Mostrando la diagonal principal
    for(int i=0; i<3;i ++){
        cout<<"[";
        for(int j=0; j<3; j++){
            if(i==j){
                cout<<numeros[i][j];
            } else {
                cout<<" ";
            }
            if(j<2){
                cout<<" ";
            }
        }
        cout<<"]"<<endl;
    }

    getchar();
    return 0;
}