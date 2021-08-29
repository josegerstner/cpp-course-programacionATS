/* Estructuras anidadas en C++ */

#include<iostream>

using namespace std;

struct info_direccion{
      char direccion[30];
      char ciudad[30];
      char provincia[30];
};

struct empleado{
      char nombre[20];
      struct info_direccion dir_empleado;
      double salario;
}empleados[2];

int main() {
      for(int i=0; i<2; i++){
            fflush(stdin);
            cout<<"Digite su nombre: ";
            cin.getline(empleados[i].nombre, 20, '\n'); cin.ignore();
            fflush(stdin);
            cout<<"Digite su dirección: ";
            cin.getline(empleados[i].dir_empleado.direccion, 30, '\n'); cin.ignore();
            fflush(stdin);
            cout<<"Digite su ciudad: ";
            cin.getline(empleados[i].dir_empleado.ciudad, 30, '\n'); cin.ignore();
            fflush(stdin);
            cout<<"Digite su provincia: ";
            cin.getline(empleados[i].dir_empleado.provincia, 30, '\n'); cin.ignore();
            fflush(stdin);
            cout<<"Digite su salario: ";
            cin>>empleados[i].salario; cin.ignore();
            fflush(stdin);
            cout<<endl;
      }

      for(int i=0; i<2; i++){
            cout<<"Nombre: "<<empleados[i].nombre<<endl;
            cout<<"Dirección: "<<empleados[i].dir_empleado.direccion<<endl;
            cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
            cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
            cout<<"Salario: "<<empleados[i].salario<<endl;
            cout<<"\n";
      }

      getchar();
      return 0;
}