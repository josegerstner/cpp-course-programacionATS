/* 1. Realice un programa que solicite de la entrada estándar un entero
del 1 al 10 muestre en la salida estándar su tabla de multiplicar */

#include<iostream>

using namespace std;

int main() {
    int numero;

    do{
        cout<<"Digite un número: ";
        cin>>numero;
        cin.ignore(); // para limpiar el bufer de teclado
        // fflush(stdin); // otra manera para limpiar el buffer de entrada
    } while(numero<1 || numero>10);

    for(int i=1; i<=10; i++) {
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    cout<<endl<<endl;

    getchar();

    return 0;
}