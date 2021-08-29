/* Busqueda binaria */

// la cadena tiene que estar ordena de forma ascendente

// a[5] = {3,4,2,1,5} = 4

#include<iostream>

using namespace std;

int main() {
      int numeros[]={1,2,3,4,5},
      inferior, superior, mitad, dato;
      char flag = 'F';

      dato=4;

      // Busqueda Binaria
      inferior=0;
      superior=5;
      while(inferior<=superior){
            mitad = (inferior+superior)/2;

            if(numeros[mitad] == dato) {
                  flag='V';
                  break; 
            }

            if(numeros[mitad] > dato) {
                  superior = mitad;
                  mitad = (inferior + superior)/2;
            }
            if(numeros[mitad] < dato) {
                  inferior = mitad;
                  mitad = (inferior + superior)/2;
            }
      }

      if(flag=='F'){
            cout<<"El número a buscar NO existe en el arreglo."<<endl;
      } else {
            cout<<"El número ha sido encontrado en la posición "<<mitad<<"."<<endl;
      }

      cout<<endl;

      getchar();
      return 0;
}