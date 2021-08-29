/* 3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario. */

#include<iostream>
#include<string.h>

using namespace std;

struct Empleado{
      char nombre[20];
      int salario;
};

int main() {
      int cantidad_empleados, pos_mayor, pos_menor;
      float mayor=0, menor=999999;

      cout<<"Digite el número de empleados: ";
      cin>>cantidad_empleados; cin.ignore(); fflush(stdin);

      struct Empleado empleados[cantidad_empleados];

      for(int i=0; i<cantidad_empleados; i++){
            cout<<"Empleado nro: "<<i+1<<endl;

            fflush(stdin);
            cout<<"Digite su nombre: ";
            cin.getline(empleados[i].nombre, 20, '\n'); fflush(stdin);

            cout<<"Digite su salario: ";
            cin>>empleados[i].salario; cin.ignore(); fflush(stdin);

            if(empleados[i].salario>mayor){
                  mayor = empleados[i].salario;
                  pos_mayor = i;
            }

            if(empleados[i].salario<menor){
                  menor = empleados[i].salario;
                  pos_menor = i;
            }
      }

      cout<<"\nEl empleado con mayor salario es: ";
      cout<<"\nNombre: "<<empleados[pos_mayor].nombre<<endl;
      cout<<"Salario: "<<empleados[pos_mayor].salario<<endl;

      cout<<"\nEl empleado con menor salario es: ";
      cout<<"\nNombre: "<<empleados[pos_menor].nombre<<endl;
      cout<<"Salario: "<<empleados[pos_menor].salario<<endl;

      getchar();
      return 0;
}