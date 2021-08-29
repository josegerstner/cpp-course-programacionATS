/* Copiar el contenido de una cadena a otra -  Función strcpy() */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char nombre[] = "José";
    char nombre2[20];

    strcpy(nombre2, nombre);

    cout<<nombre2<<endl;

    getchar();
    return 0;
}