/* 4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número
introducido por el usuario. Por ejemplo, si se introduce el número 256.879, debería
desplegarse el número 0.879 */

#include<iostream>

using namespace std;

// prototipo de función
void pedirDatos();
void funfracc(double x);

double numero;

int main(){
      pedirDatos();
      funfracc(numero);

      getchar();
      return 0;
}

void pedirDatos(){
      cout<<"\nDigite un número: ";
      cin>>numero;
}

// Definición de función
void funfracc(double x){
      double parte_entera, parte_decimal;
      parte_entera = (int) x;
      parte_decimal = x - (double) parte_entera;
      cout<<"\nEl resultado es: "<<parte_decimal<<endl;
}
