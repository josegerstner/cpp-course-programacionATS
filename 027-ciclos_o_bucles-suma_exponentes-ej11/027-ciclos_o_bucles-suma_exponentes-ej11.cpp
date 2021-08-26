/* Escibe un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n */

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int numero, suma=0, elevacion=0;

    cout<<"Digite un número: ";
    cin>>numero; cin.ignore();

    for(int i=1; i<=numero; i++){
        elevacion = pow(2, i);
        suma += elevacion;
    }

    cout<<"\nEl resultado es: "<<suma<<endl<<endl;

    getchar();
    return 0;
}