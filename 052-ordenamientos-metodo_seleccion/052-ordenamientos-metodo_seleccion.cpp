/* Ordenamiento por selección */
// buscar mínimo de la lista, cambiarlo con el primero de la lista
// buscar mínimo del resto de la lista, cambiarlo con el segundo de la lista
// etc...
// si numIzq > numActual => cambio

#include<iostream>

using namespace std;

int main() {

      int numeros[]={4,1,5,3,2},
      i, j, aux, min;

      // Ordenamiento por selección
      for(i=0; i<5; i++){
            min = i;
            
            for(j=i+1; j<5; j++){
                  if(numeros[j]<numeros[min]){
                        min = j;
                  }
            }
            aux=numeros[i];
            numeros[i] = numeros[min];
            numeros[min] = aux;
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