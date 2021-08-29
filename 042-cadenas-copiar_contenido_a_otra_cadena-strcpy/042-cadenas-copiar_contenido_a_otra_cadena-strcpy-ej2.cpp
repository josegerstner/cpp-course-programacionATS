/* 2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar
todo su contenido hacia otro arreglo de caracteres */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char cadena[100], copiaCadena[100];

    cout<<"\nIngrese una cadena de caracteres: ";
    cin.getline(cadena, 100, '\n');
    cin.ignore();

    strcpy(copiaCadena, cadena);

    cout<<"\nLa cadena copiada es: "<<copiaCadena<<endl;

    getchar();
    return 0;
}