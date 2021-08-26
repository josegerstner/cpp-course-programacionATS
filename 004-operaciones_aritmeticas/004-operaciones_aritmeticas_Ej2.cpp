/* 2. Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la
 salida estándar el precio del producto al aplicarle el IVA */
#include<iostream>

using namespace std;

int main() {
	float precio, precioConIVA=0.0;
	float IVA = 21;
	cout<<"Ingrese el precio del producto: "; cin>>precio;

	precioConIVA = precio * (1 + IVA/100);

	cout<<"El precio con IVA es: "<<precioConIVA<<endl;

	return 0;
}
