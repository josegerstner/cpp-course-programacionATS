/* 14. Realice una función que tome como parámetros un vector de enteros y su tamaño e imprima
un vector con los elementos impares del vector recibido. */

#include<iostream>

using namespace std;

void pedirDatos();
void mostrarImpares(int vec[], int);

int vec[100], tam;
int main(){
      
      pedirDatos();
      mostrarImpares(vec, tam);

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

void mostrarImpares(int vec[], int tam){
      cout<<"\nEl nuevo vector es: { ";

      for(int i=0; i<tam; i++){
            if(vec[i]%2!=0){
                  cout<<vec[i]<<" ";
            }
      }

      cout<<"}."<<endl;
}