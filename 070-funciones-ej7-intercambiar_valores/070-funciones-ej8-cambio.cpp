/* 8. Escriba una función llamada cambio() que tenga un parámetro en número entero y seis
parámetros de referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco
y uno, respectivamente. La función tiene que considerar el valor entero transmitido como
una cantidad en dólares y convertir el valor en el número menor de billetes equivalentes. */

#include<iostream>

using namespace std;

void dameCambio(int, int&,int&,int&,int&,int&,int&);

int main(){
      int cantidad,
      cien = 0, cincuenta = 0, veinte = 0,
      diez = 0, cinco = 0, uno = 0;

      cout<<"\nDigite un número: ";
      cin>>cantidad;

      dameCambio(cantidad, cien, cincuenta, veinte, diez, cinco, uno);

      cout<<"\nLa cantidad de $"<<cantidad<<" se reparte en:"<<endl;
      cout<<"Billetes de $100: "<<cien<<endl;
      cout<<"Billetes de $50: "<<cincuenta<<endl;
      cout<<"Billetes de $20: "<<veinte<<endl;
      cout<<"Billetes de $10: "<<diez<<endl;
      cout<<"Billetes de $5: "<<cinco<<endl;
      cout<<"Billetes de $1: "<<uno<<endl;

      getchar();
      return 0;
}

void dameCambio(int cantidad, int& cien, int& cincuenta,
      int& veinte, int& diez, int& cinco, int& uno){
      
      while(cantidad>=100){
            cantidad-=100;
            cien++;
      }

      while(cantidad>=50){
            cantidad-=50;
            cincuenta++;
      }

      while(cantidad>=20){
            cantidad-=20;
            veinte++;
      }

      while(cantidad>=10){
            cantidad-=10;
            diez++;
      }

      while(cantidad>=5){
            cantidad-=5;
            cinco++;
      }

      while(cantidad>=1){
            cantidad-=1;
            uno++;
      }
}