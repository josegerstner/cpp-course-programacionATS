/* 10. Mostrar los meses del año, pidiéndole al usuario un número
entre (1-12), y mostrar el mes al que corresponde */

#include<iostream>

using namespace std;

int main() {
    int mes;

    cout<<"Ingrese el mes en número (1-12): "; cin>>mes;

    cout<<"\nEl mes es: ";

    switch (mes) {
        case 1: cout<<"enero"; break;
        case 2: cout<<"febrero"; break;
        case 3: cout<<"marzo"; break;
        case 4: cout<<"abril"; break;
        case 5: cout<<"mayo"; break;
        case 6: cout<<"junio"; break;
        case 7: cout<<"julio"; break;
        case 8: cout<<"agosto"; break;
        case 9: cout<<"septiembre"; break;
        case 10: cout<<"octubre"; break;
        case 11: cout<<"noviembre"; break;
        case 12: cout<<"diciembre"; break;
        default: cout<<"el valor ingresado es incorrecto"; break;
    }

    cout<<"."<<endl;

    return 0;
}