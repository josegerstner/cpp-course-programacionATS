/* Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto número e indicar si el número coincide con alguno de 
los introducidos con anterioridad */

#include<iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;
    cout<<"Ingrese tres números: "; cin>>n1>>n2>>n3;
    cout<<"Ingrese un cuarto número: "; cin>>n4;

    // switch (n4) {
    //     case n1: cout<<"\nEl cuarto número es igual al primero."<<endl; break;
    //     case n2: cout<<"\nEl cuarto número es igual al segundo."<<endl; break;
    //     case n3: cout<<"\nEl cuarto número es igual al tercero."<<endl; break;
    //     default: cout<<"\nEl cuarto número NO es igual a ninguno de los anteriores."<<endl; break;
    // }

    if(n4==n1){
        cout<<"\nEl cuarto número es igual al primero."<<endl;
    } else if(n4==n2){
        cout<<"\nEl cuarto número es igual al segundo."<<endl;
    } else if(n4==n3){
        cout<<"\nEl cuarto número es igual al tercero."<<endl;
    } else {
        cout<<"\nEl cuarto número NO es igual a ninguno de los anteriores."<<endl;
    }

    return 0;
}