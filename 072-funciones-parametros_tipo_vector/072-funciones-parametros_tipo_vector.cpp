/* Paso de parámetros del tipo vector

parámetros de la función:
      void nombreDeFunción(tipo nombreArreglo[], int tamañoArreglo)

Llamada a la función
      nombreDeFunción(nombreArreglo, tamañoArreglo)
*/

// Cuadrado de los elementos de un vector


#include<iostream>

using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
      const int TAMANIO = 5;
      int vector[TAMANIO] = {1,2,3,4,5};

      cuadrado(vector, TAMANIO);

      muestra(vector, TAMANIO);

      getchar();
      return 0;
}

void cuadrado(int vec[], int tam){
      for(int i=0; i<tam; i++){
            vec[i] *= vec[i];
      }
}

void muestra(int vec[], int tam){
      cout<<"\nEl cuadrado es: { ";

      for(int i=0; i<tam; i++){
            cout<<vec[i]<<" ";
      }

      cout<<"}"<<endl;
}