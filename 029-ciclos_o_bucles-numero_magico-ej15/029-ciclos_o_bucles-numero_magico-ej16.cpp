/* 16. Realice un programa que calcule la descomposición en factores primos
de un número entero. Por ejemplo: 20 = 2 * 2 * 5 */

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