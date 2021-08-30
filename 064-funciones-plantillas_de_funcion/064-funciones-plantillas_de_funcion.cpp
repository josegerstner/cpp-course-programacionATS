/* Plantillas de función

Ejemplo: sacar valor absoluto de un número */

#include<iostream>

using namespace std;

// prototipo de función
template <class TIPOD> // plantilla (me permite mandar distintos tipos de datos)
void mostrarAbs(TIPOD numero);

int main(){
      int num1 = 4;
      float num2 = 56.67;
      double num3 = 123.5678;

      mostrarAbs(num1);
      mostrarAbs(num2);
      mostrarAbs(num3);

      getchar();
      return 0;
}

// Definición de función
template <class TIPOD>
void mostrarAbs(TIPOD numero){
      if(numero<0){
            numero *= -1;
      }

      cout<<"\nEl valor absoluto del número es: "<<numero<<endl;
}
