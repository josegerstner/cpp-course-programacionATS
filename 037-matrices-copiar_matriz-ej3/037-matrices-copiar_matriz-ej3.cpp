/* 3. Hacer una matriz de tipo entero 2 * 2, llenarla de números y luego copiar todo
su contenido hacia otra matriz. */

#include<iostream>

using namespace std;

int main() {
    int numeros[2][2] = {1,2, 3,4},
    copia[2][2];

    for(int i=0; i<2;i ++){
        for(int j=0; j<2; j++){
            copia[i][j] = numeros[i][j];
        }
    }

    for(int i=0; i<2;i ++){
        for(int j=0; j<2; j++){
            cout<<copia[i][j];
        }
        cout<<endl;
    }

    getchar();
    return 0;
}