/* 4. Crear una cadena que tenga la siguiente frase "Hola qué tal", luego
crear otra cadena para preguntarle al usuario su nombre. Por último, añadir
el nombre al final de la primera cadena y mostrar el mensaje completo
"Hola que tal (NombreDelUsuario)" */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char saludo[] = "Hola qué tal",
    nombre[30];
    char cadena3[50];

    cout<<"Ingrese su nombre: ";
    cin.getline(nombre, 30, '\n');
    cin.ignore();

    strcat(cadena3, saludo);
    strcat(cadena3, " ");
    strcat(cadena3, nombre);

    cout<<cadena3<<endl;

    getchar();
    return 0;
}