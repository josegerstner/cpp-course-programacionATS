/* Devolver valores múltiples */

// sumar y multiplicar dos números
#include<iostream>

using namespace std;

void calcular(int, int, int&, int&);

int main(){
      int num1, num2, suma=0, producto=0;

      cout<<"Digite un número: ";
      cin>>num1;
      cout<<"Digite otro número: ";
      cin>>num2;

      calcular(num1, num2, suma, producto);

      cout<<"\nLa suma es: "<<suma<<endl;
      cout<<"El producto es: "<<producto<<endl;

      getchar();
      return 0;
}

void calcular(int num1, int num2, int& suma, int& producto){
      suma = num1 + num2;
      producto = num1 * num2;
}