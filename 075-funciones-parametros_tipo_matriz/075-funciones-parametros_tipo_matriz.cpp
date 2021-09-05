/* Paso de parámetros de tipo matriz. */

// Elevar al cuadrado todos los elementos de una matriz

#include<iostream>

using namespace std;

// es obligatorio poner el numero de columnas maximo que puede tener la matriz
void mostrarMatriz(int m[][3], int, int, char*);
void calcularCuadrado(int m[][3], int, int);

int main(){
      const int filas = 2, columnas = 3;
      int matriz[filas][columnas] = {{1,2,3}, {4,5,6}};
      char original[100] = "Mostrando matriz original";
      char cuadrado[100] = "Mostrando el cuadrado de la matriz";

      mostrarMatriz(matriz, filas, columnas, original);
      calcularCuadrado(matriz, filas, columnas);
      mostrarMatriz(matriz, filas, columnas, cuadrado);

      getchar();
      return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol, char* texto){
      cout<<"\n"<<texto<<": { ";
      for(int i=0; i<nfilas; i++){
            for(int j=0; j<ncol; j++){
                  if(j==0){ cout<<"{ ";}
                  cout<<m[i][j]<<" ";
            }
            cout<<"}";
            if(i!=(nfilas-1)){ cout<<", ";}
      }
      
      cout<<" }"<<endl;
}
void calcularCuadrado(int m[][3], int nfilas, int ncol){
      for(int i=0; i<nfilas; i++){
            for(int j=0; j<ncol; j++){
                  m[i][j] *= m[i][j];
            }
      }
}