/* 5. Escriba un programa que lea de la entrada estándar un carácter
e indique en la salida estándar si el carácter es vocal minúscula, 
es una volcal mayúscula o no es una vocal */

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
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"\nEl carácter ingresado es una vocal mayúscula."<<endl; break;
        default: cout<<"\nEl carácter ingresado NO es una vocal."<<endl; break;
    }

    return 0;
}