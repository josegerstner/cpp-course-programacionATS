/* Escriba un programa que lea dos números y determine cuál de ellos
es el mayor */

#include<iostream>

using namespace std;

int main() {
    int n1, n2;

    cout<<"Digite dos números: ";
    cin>>n1>>n2;

    if(n1==n2){
        cout<<"\nAmbos números son iguales."<<endl;
    } else if(n1>n2) {
        cout<<"\nEl mayor es: "<<n1<<endl;
    } else {
        cout<<"\nEl mayor es: "<<n2<<endl;
    }

    return 0;
}