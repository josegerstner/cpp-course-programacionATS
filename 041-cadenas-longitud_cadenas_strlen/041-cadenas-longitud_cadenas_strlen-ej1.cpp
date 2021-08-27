/* 1. Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si esta supera a 10 caracteres
mostrarla en pantalla, caso contrario no mostrarla */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char palabra[50];
    int longitud = 0;
    

    cout<<"Digite su nombre: ";
    cin.getline(palabra, 50, '\n');
    cin.ignore();
    longitud = strlen(palabra);

    if(longitud>10){
        cout<<palabra<<endl;
    }

    getchar();
    return 0;
}