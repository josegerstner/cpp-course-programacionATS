/* 8. Hacer un programa que lea 5 números en un arreglo, los copie
a otro arreglo multiplicados por 2 y muestre el segundo arreglo. */

#include<iostream>

using namespace std;

int main() {
    int tamanio=5, numeros[tamanio], multiplicados[tamanio];
    
    for(int i=0; i<tamanio; i++){
        cout<<"Digite un número: ";
        cin>>numeros[i]; cin.ignore();
        multiplicados[i]=numeros[i]*2;
    }

    cout<<"\nEl nuevo vector es: ";

    for(int i=0; i<tamanio; i++){
        cout<<multiplicados[i]<<", ";
    }

    cout<<endl;

    getchar();

    return 0;
}