/* 3. Escriba un programa que lea de la entrada estándar un vector de números
y muestre en la salida estándar los números del vector con sus índices asociados. */

#include<iostream>

using namespace std;

int main() {
    int tamanio;

    cout<<"Digite el número de elementos que va a tener el arreglo: ";
    cin>>tamanio; cin.ignore();

    int numeros[tamanio];

    for(int i=0; i<tamanio; i++){
        cout<<"Digite un número: ";
        cin>>numeros[i]; cin.ignore();
    }

    for(int i=0; i<tamanio; i++){
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    getchar();

    return 0;
}