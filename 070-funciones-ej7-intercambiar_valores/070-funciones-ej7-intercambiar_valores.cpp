/* 7. Intercambiar el valor de dos variables utilizando paso de parámetros por referencia */
#include<iostream>

using namespace std;

void intercambiar(int&, int&);

int main(){
      int num1=10, num2=15;

      intercambiar(num1, num2);

      cout<<"\nEl valor de num1 es: "<<num1<<endl;
      cout<<"El valor de num2 es: "<<num2<<endl;

      getchar();
      return 0;
}

void intercambiar(int& xnum, int& ynum){
      int aux=xnum;
      xnum=ynum;
      ynum=aux;
}