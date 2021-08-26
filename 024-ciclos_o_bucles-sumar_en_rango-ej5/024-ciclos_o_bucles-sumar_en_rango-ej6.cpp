/* 6. Escriba un programa que calcule x^y, donde tanto x como y
son enteros positivos, sin utilizar la función pow */

#include<iostream>

using namespace std;

int main(){
    int x, y, resultado=1;

    cout<<"A continuación ingrese sólo números positivos."<<endl;
    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    while(y>=1) {
        resultado*=x;  
        y--;  
    }

    cout<<"\nEl resultado es: "<<resultado<<endl;

    getchar();
    return 0;
}