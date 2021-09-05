/* 13. Realice una función que tome como parámetros un vector de números y su tamaño
y cambie el signo de los elementos del vector. */

#include<iostream>

using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int vec[100], tam;
int main(){
      
      pedirDatos();
      cambiarSigno(vec, tam);
      mostrarVector(vec, tam);

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

void cambiarSigno(int vec[], int tam){
      for(int i=0; i<tam; i++){
            vec[i] *= -1;
      }
}

void mostrarVector(int vec[], int tam){
      cout<<"\nEl nuevo vector es: { ";

      for(int i=0; i<tam; i++){
            cout<<vec[i]<<" ";
      }

      cout<<"}."<<endl;
}