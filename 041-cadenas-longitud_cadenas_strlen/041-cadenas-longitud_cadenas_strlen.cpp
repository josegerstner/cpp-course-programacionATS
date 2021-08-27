/* Longitud de una cadena de caracteres - Función strlen() */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char palabra[] = "hola que tal?";
    int longitud = 0;
    
    longitud = strlen(palabra);

    cout<<"\nNúmero de elementos de la cadena: "<<longitud<<endl;

    getchar();
    return 0;
}