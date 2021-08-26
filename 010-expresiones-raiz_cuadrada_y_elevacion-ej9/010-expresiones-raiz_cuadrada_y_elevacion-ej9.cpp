/* 9. Realice un programa que calcule el valor que toma la siguiente función 
para unos valores dados en x e y:
    f(x,y)= sqrt(x)/(pow(y,2)-1) */
#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float x, y, function=0;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    function = sqrt(x)/(pow(y,2)-1);

    cout<<"\nEl valor de la función es: "<<function<<endl;

    return 0;
}