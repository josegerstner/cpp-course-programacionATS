/* CADENAS de CARACTERES */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    // char palabra1[] = "Josue";
    // char palabra2[] = {'J','o','s','u','e'};
    char nombre[30];

    cout<<"Digite su nombre: ";
    // gets(nombre); en Windows
    // scanf ("%[^\n]%*c", nombre);
    cin.getline(nombre, 30, '\n');
    cin.ignore();

    cout<<nombre<<endl;

    // cout<<palabra1<<endl;
    // cout<<palabra2<<endl;

    getchar();
    return 0;
}