/* 3. Escriba un programa que defina un vector de números y calcule si existe
algún número en el vector cuyo valor equivale a la suma del resto de números
del vector. */

#include<iostream>

using namespace std;

int main() {
    int numeros[] = {1,2,12,4,5}, suma=0;

    for(int i=0; i<5; i++){
        suma+=numeros[i];
    }

    for(int i=0; i<5; i++){
        if(numeros[i]==(suma - numeros[i])){
            cout<<"El elemento "<<i<<" es la suma del resto."<<endl;
        }
    }

    cout<<"\nFin del programa."<<endl;

    getchar();

    return 0;
}