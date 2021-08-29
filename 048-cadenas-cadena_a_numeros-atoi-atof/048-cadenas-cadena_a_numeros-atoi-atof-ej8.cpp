/* 8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y
otro real. Convertirlos a sus respectivos valores y por último sumarlos */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char entero[20],
      flotante[20];
      int numero; float decimal;

    cout<<"Ingrese un número entero: ";
    cin.getline(entero,20,'\n');
    cin.ignore();

    cout<<"Ingrese un número decimal: ";
    cin.getline(flotante,20,'\n');
    cin.ignore();

    numero = atoi(entero);
    decimal = atoi(flotante);

    decimal += (float) numero;

    cout<<"\nLa suma de los números es: "<<decimal<<endl;
    
    getchar();
    return 0;
}