/* 2. Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le
transmite y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado
números flotantes */

#include<iostream>

using namespace std;

// prototipo de función
void al_cuadrado(float x);

int main(){
      float numero;

      cout<<"\nDigite un número: ";
      cin>>numero;

      al_cuadrado(numero);

      getchar();
      return 0;
}

// Definición de función
void al_cuadrado(float x){
      float cuadrado;
      cuadrado = x * x;
      cout.precision(3);
      cout<<"El resultado es: "<<cuadrado<<endl;
}
