/* 4. Escribe un programa que defina un vector de números y muestre en la salida
 estándar el vector en orden inverso - del último al primer elemento. */

#include<iostream>

using namespace std;

int main() {
    int numeros[] = {1,2,3,4,5};

    cout<<"El vector en orden inverso es: ";
    for(int i=4; i>=0; i--){
        cout<<numeros[i]<<" ";
    }

    cout<<endl;

    getchar();

    return 0;
}