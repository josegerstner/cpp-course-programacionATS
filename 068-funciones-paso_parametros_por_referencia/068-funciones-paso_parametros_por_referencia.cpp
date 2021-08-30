/* Paso de parámetros por referencia */
// En este caso no le envío el valor sino la dirección de memoria donde está
// almacenado mi valor

#include<iostream>

using namespace std;

void valNuevo(int&, int&); //paso por referencia

int main(){
      int num1, num2;

      cout<<"Digite un número: ";
      cin>>num1;
      cout<<"Digite otro número: ";
      cin>>num2;

      valNuevo(num1, num2);

      cout<<"\nEl nuevo valor del primer número es: "<<num1<<endl;
      cout<<"El nuevo valor del segundo número es: "<<num2<<endl;

      getchar();
      return 0;
}

void valNuevo(int& xnum, int& ynum){
      cout<<"\nEl valor del primer número es: "<<xnum<<endl;
      cout<<"El valor del segundo número es: "<<ynum<<endl;

      xnum = 89;
      ynum = 45;
}