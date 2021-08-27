/* 2. Escriba un programa que defina un vector de números
y calcule la multiplicación acumulada de sus elementos. */

#include<iostream>

using namespace std;

int main() {
    int numeros[] = {1,2,3,4,5};
    int multiplicacion=1;

    for(int i=0; i<5; i++){
        multiplicacion *= numeros[i];
    }

    cout<<"La multiplicación es: "<<multiplicacion<<endl<<endl;

    getchar();

    return 0;
}