/* La sentencia switch

    switch(expresión){
        case litereal1:
            conjunto de instrucciones1;
            break;
        case litereal2:
            conjunto de instrucciones2;
            break;
        case literealn:
            conjunto de instruccionesn;
            break;
        default:
            conjunto de instrucciones por defecto;
            break;
    }
*/

#include<iostream>

using namespace std;

int main() {
    int numero;

    cout<<"Digite un número entre 1 y 5: ";
    cin>>numero;

    switch (numero)
    {
        case 1: cout<<"\nEs el número 1."<<endl; break;
        case 2: cout<<"\nEs el número 2."<<endl; break;
        case 3: cout<<"\nEs el número 3."<<endl; break;
        case 4: cout<<"\nEs el número 4."<<endl; break;
        case 5: cout<<"\nEs el número 5."<<endl; break;
        
        default: cout<<"\nEl número está fuera del rango 1-5."<<endl; break;
    }

    return 0;
}