/* Hacer un programa que calcule el resultado de
la siguiente expresión: 1-2+3-4+5-6...n */

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int numero, suma=0;

    cout<<"Digite un número: ";
    cin>>numero; cin.ignore();

    for(int i=1; i<=numero; i++){
        if(i%2==0){
            suma -= i;
        } else {
            suma += i;
        }
    }

    cout<<"\nEl resultado es: "<<suma<<endl<<endl;

    getchar();
    return 0;
}