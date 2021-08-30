/* 6. Escriba una plantilla de función llamada maximo() que devuelva el valor máximo
entre tres argumentos que se le transmitan a la función cuando sea llamada. Suponga
que los tres argumentos serán del mismo tipo de datos. */

#include<iostream>

using namespace std;

// prototipo de función
template <class TIPOD>
void maximo(TIPOD x, TIPOD y, TIPOD z);

int main(){
      double x, y, z;

      cout<<"\nDigite el primer valor: ";
      cin>>x; cin.ignore(); fflush(stdin);
      cout<<"Digite el segundo valor: ";
      cin>>y; cin.ignore(); fflush(stdin);
      cout<<"Digite el tercer valor: ";
      cin>>z; cin.ignore(); fflush(stdin);

      maximo(x,y,z);

      getchar();
      return 0;
}

template <class TIPOD>
void maximo(TIPOD x, TIPOD y, TIPOD z){
      TIPOD mayor;
      if(x>=y && x>=z){
            mayor = x;
      } else if(y>=x && y>=z){
            mayor = y;
      } else { mayor = z; }

      cout<<"El mayor es: "<<mayor<<endl;
}