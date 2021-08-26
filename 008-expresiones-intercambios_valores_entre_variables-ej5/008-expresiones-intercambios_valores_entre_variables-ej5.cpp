/* 5. Escriba el fragmento de un programa que intercambie los valores 
de dos variables */

#include<iostream>

using namespace std;

int main() {
    int var1, var2, aux=0;
    
    cout<<"Digite el valor de la primera variable: "; cin>>var1;
    cout<<"Digite el valor de la segunda variable: "; cin>>var2;

    aux = var1;
    var1 = var2;
    var2 = aux;

    cout<<"\nEl valor de la primera variable es: "<<var1<<endl;
    cout<<"El valor de la segunda variable es: "<<var2<<endl;

    return 0;
}