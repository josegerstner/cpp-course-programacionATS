/* 8. Escriba un programa que lea de la entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la salida estándar su hipotenusa */

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float catetoA, catetoB, hipotenusa=0;
    
    cout<<"Ingrese la distancia del cateto a: "; cin>>catetoA;
    cout<<"Ingrese la distancia del cateto b: "; cin>>catetoB;

    hipotenusa = sqrt(pow(catetoA,2) + pow(catetoB,2));

    cout.precision(3);
    cout<<"\nLa hipotenusa del triángulo rectángulo es: "<<hipotenusa<<endl;

    return 0;
}