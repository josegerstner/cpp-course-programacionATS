/* 3. Escriba un programa que lea de la entrada estándar un vector de enteros
y determine el mayor elemento de un vector. */

#include<iostream>

using namespace std;

int main() {
    int tamanio, mayor=0;

    cout<<"Digite el número de elementos que va a tener el arreglo: ";
    cin>>tamanio; cin.ignore();

    int numeros[tamanio];

    for(int i=0; i<tamanio; i++){
        cout<<i+1<<". Digite un número: ";
        cin>>numeros[i]; cin.ignore();

        if(i==0){
            mayor=numeros[i];
        }
        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }

    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;

    getchar();

    return 0;
}