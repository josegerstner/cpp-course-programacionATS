/* Hacer un programa que simule un cajero automático con un saldo inicial
de 1000 dólares */

#include<iostream>

using namespace std;

int main() {
    int saldo_inicial = 1000, opcion;
    float extra, retiro, saldo=0;

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta."<<endl;
    cout<<"2. Retirar dinero de la cuenta."<<endl;
    cout<<"3. Salir."<<endl;

    cout<<"\nOpción: "; cin>>opcion;

    switch (opcion) {
    case 1: 
        cout<<"\nDigite la cantidad de dinero a ingresar: ";
        cin>>extra;
        saldo = saldo_inicial + extra;
        cout<<"\nDinero en cuenta: "<<saldo<<endl; break;
    case 2: 
        cout<<"\nDigite la cantidad de dinero a retirar: ";
        cin>>retiro;
        if(retiro > saldo_inicial){
            cout<<"\nNO tiene esa cantidad de dinero."<<endl;
        } else {
            saldo = saldo_inicial - retiro;
            cout<<"\nDinero en cuenta: "<<saldo<<endl;
        }
        break;
    case 3: break;
    default:
        cout<<"\nOpción incorrecta."<<endl;
        break;
    }

    cout<<"\nGracias por operar con su Cajero Virtual... hijo de re mil puta"<<endl;

    return 0;
}