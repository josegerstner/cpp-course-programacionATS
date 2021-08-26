/* Hacer un menú que considere las siguientes opciones:
    Caso 1: Cubo de un número
    Caso 2: Número par o impar
    Caso 3: Salir
 */

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int opcion;
    float numero, cubo=0;

    cout<<"\tBienvenido"<<endl;
    cout<<"1. Cubo de un número."<<endl;
    cout<<"2. Número par o impar."<<endl;
    cout<<"3. Salir."<<endl;

    cout<<"\nOpción: "; cin>>opcion;

    switch (opcion) {
    case 1: 
        cout<<"\nIngrese un número: ";
        cin>>numero;
        cubo = pow(numero, 3);
        cout<<"\nEl cubo del número es: "<<cubo<<endl; break;
    case 2: 
        cout<<"\nIngrese un número: ";
        cin>>numero;
        if(numero == 0)
            cout<<"\nEl número es cero."<<endl;
        else if((int)numero %2 == 0){
            cout<<"\nEl número es par."<<endl;
        } else {
            cout<<"\nEl número es impar."<<endl;
        }
    case 3: break;
    default:
        cout<<"\nOpción incorrecta."<<endl;
        break;
    }

    cout<<"\nGracias por operar... hijo de re mil puta"<<endl;

    return 0;
}