/* 7. Escriba un programa que calcule el valor de: 1+2+3+...+n */
#include<iostream>

using namespace std;

int main() {
    int n, suma=0;
    cout<<"Digite el valor de elementos: "; cin>>n; cin.ignore();

    for(int i=1; i<=n; i++){
        suma+=i;
    }

    cout<<"\nLa suma total es de: "<<suma<<endl<<endl;

    getchar();

    return 0;
}