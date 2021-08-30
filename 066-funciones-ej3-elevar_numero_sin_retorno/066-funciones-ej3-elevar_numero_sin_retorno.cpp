/* 3. Escriba una función llamada funpot() que eleve un número entero que se le transmita
a una potencia en número entero positivo y despliegue el resultado. El número entero 
positivo deberá ser el segundo valor transmitido a la función */

#include<iostream>

using namespace std;

// prototipo de función
void pedirDatos();
void funpot(int x, int y);

int numero, exponente;

int main(){
      pedirDatos();
      funpot(numero, exponente);

      getchar();
      return 0;
}

void pedirDatos(){
      cout<<"\nDigite un número: ";
      cin>>numero;
      cout<<"\nDigite el exponente de elevación: ";
      cin>>exponente;
}

// Definición de función
void funpot(int x, int y){
      long resultado=1;
      if(y>0){
            for(int i=1; i<=y; i++){
                  resultado *= x;
            }
            cout<<"\nEl resultado es: "<<resultado<<endl;
      } else {
            cout<<"\nEl segundo valor no es positvo."<<endl;
      }
}
