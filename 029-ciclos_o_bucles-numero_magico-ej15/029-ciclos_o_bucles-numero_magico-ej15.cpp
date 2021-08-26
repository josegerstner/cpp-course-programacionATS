/* 15. Hacer un programa que piense un número entero
entre el 1 y el 100. El programa debe generar un número aleatorio en ese
mismo rango [1-100], e incarle al usuario si el número que digitó es menor o mayor
al número aleatorio, así hasta que adivine. Y por útlimo mostrarle número 
de intentos que le llevó.
variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior) */

#include<iostream>
#include<time.h>

using namespace std;

int main() {
    int numero, dato=0, contador=0;

    // genera un número aleatorio*
    srand(time(NULL)); 
    // limite_inferior + rand() % (limite_superior + 1 - limite_inferior)
    dato = 1 + rand()% + (100 + 1 - 1) ;

    do {
        cout<<"\nDigite un número: ";
        cin>>numero; cin.ignore();

        if(numero > dato){
            cout<<"\nDigite un número menor.\n";
        } else if(numero < dato){
            cout<<"\nDigite un número mayor.\n";
        }
        contador++;
    }while(numero != dato);

    cout<<"\n\nBien, boludito! Bien!\nEl número es: "<<dato<<"."<<endl;
    cout<<"\n\nTe costó "<<contador<<" intentos adivinar."<<endl;
    cout<<endl;

    getchar();

    return 0;
}