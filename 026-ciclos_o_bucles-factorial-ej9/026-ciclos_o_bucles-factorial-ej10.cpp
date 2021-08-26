/* 9. Escriba un programa que calcule el valor de: 
1!+2!+3!+...+!n (suma de factoriales) */

#include<iostream>

using namespace std;

int main() {
    int numero, factorial, suma=0;

    cout<<"Digite un número: ";
    cin>>numero; cin.ignore();

    for(int i = 1; i<=numero; i++){
        factorial=1;

        for(int f=1; f<=i; f++){
            factorial *= f;
        }

        suma+=factorial;
    }

    cout<<"\nLa suma es: "<<suma<<endl<<endl;

    getchar();
    return 0;
}