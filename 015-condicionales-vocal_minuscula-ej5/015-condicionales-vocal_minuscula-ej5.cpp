/* 5. Escriba un programa que lea de la entrada estándar un carácter
e indique en la salida estándar si el carácter es vocal minúscula o no */

#include<iostream>

using namespace std;

int main() {
    char letra;

    cout<<"Ingrese un carácter: ";
    cin>>letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"\nEl carácter ingresado es una vocal minúscula."<<endl; break;
        
        default: cout<<"\nEl carácter ingresado no es una vocal minúscula"<<endl; break;
    }

    return 0;
}