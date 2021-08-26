/* 3. Realice un programa que lea un valor entero y determine si se trata
de un número par o impar. */

#include<iostream>

using namespace std;

int main() {
    int numero;

    cout<<"Digite un valor: ";
    cin>>numero;

    if(numero == 0)
        cout<<"\nEl número es cero."<<endl;
    else if(numero %2 == 0){
        cout<<"\nEl número es par."<<endl;
    } else {
        cout<<"\nEl número es impar."<<endl;
    }

    return 0;
}