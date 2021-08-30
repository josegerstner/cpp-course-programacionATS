/* 1. Escriba una función llamada mult() que acepte dos números en punto
flotante como parámetros, multiplique esos dos números y despliegue
el resultado */

#include<iostream>

using namespace std;

// prototipo de función
void pedirDatos();
void mult(float numero1, float numero2);

float num1, num2; // variables globales

int main(){
      pedirDatos();
      mult(num1, num2);

      getchar();
      return 0;
}

void pedirDatos(){
      cout<<"Digite un número: ";
      cin>>num1; fflush(stdin);
      cout<<"Digite otro número: ";
      cin>>num2; fflush(stdin);
}

// Definición de función
void mult(float x, float y){
      float multiplicacion;
      multiplicacion = x * y;
      cout.precision(3);
      cout<<"El resultado es: "<<multiplicacion<<endl;
}
