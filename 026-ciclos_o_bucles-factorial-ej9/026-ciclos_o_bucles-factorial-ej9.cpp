/* 9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial) */

#include<iostream>

using namespace std;

int main() {
    int numero, factorial=1;

    cout<<"Digite un número: ";
    cin>>numero; cin.ignore();

    for(int i = 1; i<=numero; i++){
        factorial *= i;
    }

    cout<<"\nEl factorial de "<<numero<<" es: "<<factorial<<endl<<endl;

    getchar();
    return 0;
}