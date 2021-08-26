/* La sentencia if

    if(condicion){
        Instrucciones 1;
    } else {
        Instrucciones 2;
    }
*/

#include<iostream>

using namespace std;

int main() {
    int numero, dato = 5;

    cout<<"Digite un número: "; cin>>numero;

    if(numero == dato){
        cout<<"\nEl número es 5."<<endl;
    } else {
        cout<<"\nEl número es diferente de 5."<<endl;
    }

    return 0;
}