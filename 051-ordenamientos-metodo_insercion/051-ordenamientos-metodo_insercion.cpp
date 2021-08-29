/* Ordenamiento por inserción */
// si numIzq > numActual => cambio

#include<iostream>

using namespace std;

int main() {

      int numeros[]={4,1,5,3,2},
      i,pos,aux;

      // Ordenamiento por insercion
      for(i=0; i<5; i++){
            pos = i;
            aux = numeros[i];

            while((pos>0) && (numeros[pos-1]) > aux){
                  numeros[pos] = numeros[pos-1];
                  pos--;
            }

            numeros[pos] = aux;
      }

      cout<<"Orden ascendente: ";
      for(i=0; i<5; i++){
            cout<<numeros[i];
            if(i<4){
                  cout<<", ";
            }
      }

      cout<<endl;

      getchar();
      return 0;
}