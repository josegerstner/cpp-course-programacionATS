/* 11. Realice una función que tome como parámetros un vector de números enteros y
devuelva la suma de sus elementos */

#include<iostream>

using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;
int main(){
      
      pedirDatos();
      cout<<"\nLa suma es: "<<calcularSuma(vec, tam)<<endl;

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

int calcularSuma(int vec[], int tam){
      int suma = 0;
       
      for(int i=0; i<tam; i++){
            suma += vec[i];
      }

      return suma;
}