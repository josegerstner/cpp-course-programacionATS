/* Busqueda secuencial */

// a[5] = {3,4,2,1,5} = 4

#include<iostream>

using namespace std;

int main() {
      int numeros[]={4,1,5,3,2},
      i, dato;
      
      char flag = 'F';

      dato=3;

      // Busqueda secuencial
      i=0;
      while((flag=='F') && (i<5)){
            if(numeros[i] == dato){
                  flag='V';
            }
            i++;
      }

      if(flag=='F'){
            cout<<"El número a buscar NO existe en el arreglo."<<endl;
      } else {
            cout<<"El número ha sido encontrado en la posición "<<i-1<<"."<<endl;
      }

      cout<<endl;

      getchar();
      return 0;
}