/* Añadir o concatenar una cadena con otra - Función strcat() */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char cadena1[] = "Esto es una cadena",
    cadena2[] = " de ejemplo.";
    char cadena3[30];

    strcpy(cadena3, cadena1);

    strcat(cadena3, cadena2);

    cout<<cadena3<<endl;    

    getchar();
    return 0;
}