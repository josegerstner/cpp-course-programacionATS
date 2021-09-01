/* 12. Realice una función que tome como parámetros un vector y su tamaño y diga si el vector
está ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del 
vector, salvo para la 0, el elemento del vector es mayor o igual que el elemento que
le precede en el vector. */

#include<iostream>

using namespace std;

void pedirDatos();
void estaOrdenado(int vec[], int);

int vec[100], tam;
int main(){
      
      pedirDatos();
      estaOrdenado(vec, tam);

      getchar();
      return 0;
}

void pedirDatos(){
      cout<<"Digite el número de elementos del vector: ";
      cin>>tam; cin.ignore(); fflush(stdin);

      for(int i=0; i<tam; i++){
            cout<<i+1<<". Digite un número: ";
            cin>>vec[i]; cin.ignore(); fflush(stdin);
      }
}

void estaOrdenado(int vec[], int tam){
      int orden = 0;
       
      for(int i=1; i<tam; i++){
            if(vec[i] >= vec[i-1]){
                  orden++;
            }
      }

      if(orden == tam-1){
            cout<<"\nEl vector está ordenado crecientemente";
      } else {
            cout<<"\nEl vector NO está ordenado crecientemente";
      }
}