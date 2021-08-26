/* Escriba un programa que lea tres números y determine cuál de ellos
es el mayor */

#include<iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout<<"Digite tres números: ";
    cin>>n1>>n2>>n3;

    if(n1==n2 && n1==n3){
        cout<<"\nLos tres números son iguales."<<endl;
    } else if(n1>=n2 && n1>=n3) {
        cout<<"\nEl mayor es: "<<n1<<endl;
    } else if(n2>=n1 && n2>=n3) {
        cout<<"\nEl mayor es: "<<n2<<endl;
    } else if(n3>n1 && n3>n2) {
        cout<<"\nEl mayor es: "<<n3<<endl;
    }
    
    return 0;
}