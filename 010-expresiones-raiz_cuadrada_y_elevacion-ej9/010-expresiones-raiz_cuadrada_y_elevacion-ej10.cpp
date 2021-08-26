/* 10. Escriba un programa que calcule las soluciones de una ecuación de segundo
grado de la forma ax^2 + bx + c=0, teniendo en cuenta que:
    x=(-b+-sqrt(b^2-4ac))/2a */

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float a, b, c, x1=0, x2=0, aux=0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;

    aux=pow(b,2) - 4*a*c;

    if(aux=0){
        x1 = -b / (2*a);
        cout<<"\nLa función tiene una raíz doble en: "<<x1<<endl;
    }else if(aux<0){
        cout<<"\nLa función no tiene raíces reales."<<x1<<endl;
    } else {
        x1 = (-b + sqrt(aux)) / (2*a);
        x2 = (-b - sqrt(aux)) / (2*a);

        cout<<"\nLos posibles valores para x son: "<<x1<<" y "<<x2<<endl;
    }
    
    return 0;
}