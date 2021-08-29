/* Metodo Burbuja */

#include<iostream>

using namespace std;

int main() {

      int numeros[]={4,1,2,3,5},
      i,j,aux;

      // Método burbuja
      for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                 if(numeros[j]>numeros[j+1]){
                       aux = numeros[j];
                       numeros[j] = numeros[j+1];
                       numeros[j+1] = aux;
                 }
            }
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