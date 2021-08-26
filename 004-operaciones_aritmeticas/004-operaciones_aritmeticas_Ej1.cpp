/* 1. Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división */

#include<iostream>

using namespace std;

int main() {
	int numero, otronumero, suma=0, 
	resta=0, multiplicacion=0, division=0;

	cout<<"Digite un numero: "; cin>>numero;
	cout<<"Digite otro numero: "; cin>>otronumero;

	suma = numero + otronumero;
	resta = numero - otronumero;
	multiplicacion = numero * otronumero;
	division = numero / otronumero;

	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicación es: "<<multiplicacion<<endl;
	cout<<"La división es: "<<division<<endl;

	return 0;
}
