/* Función: realiza una tarea concreta y puede ser diseñana, implementada y depurada
de manera independiente al resto del código. 
tipo nombre(tipo var1, tipo var2, ... tipo varn){
      conjunto de instrucciones;
      return x;
}
*/

#include<iostream>

using namespace std;

// prototipo de función
int findMax(int x, int y);

int main(){
      int n1, n2, mayor;

      cout<<"Digite un número: ";
      cin>>n1;
      cout<<"Digite otro número: ";
      cin>>n2;

      mayor = findMax(n1, n2);

      cout<<"\nEl mayor es: "<<mayor<<endl;

      getchar();
      return 0;
}

// Definición de función
int findMax(int x, int y){
      int numMax;

      if(x>y){
            numMax = x;
      } else {
            numMax = y;
      }

      return numMax;
}
