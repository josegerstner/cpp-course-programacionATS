/* Hacer una estructura llamada allumno, en la cual se tendrán los siguientes
campos: nombre, edad, promedio, pedir datos al usuario 3 alumnos, comprobar 
cual de los 3 tiene el mejor promedio y posteriormente imprimir los 
datos del alumno*/

#include<iostream>

using namespace std;

int TOTAL = 3;

struct alumno{
      char nombre[20];
      int edad;
      float promedio;
}alumnos[3];

int main() {
      float mayor=0;
      int pos = 0;

      for(int i=0; i<TOTAL; i++){
            fflush(stdin);
            cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n'); fflush(stdin);
            cout<<"Edad: "; cin>>alumnos[i].edad; cin.ignore(); fflush(stdin);
            cout<<"Promedio: "; cin>>alumnos[i].promedio; cin.ignore(); fflush(stdin);
            if(alumnos[i].promedio>mayor){
                  mayor=alumnos[i].promedio;
                  pos=i;
            }
      }

      cout<<"\nEl alumno con mayor promedio es: "<<endl;
      cout<<"\nNombre: "<<alumnos[pos].nombre<<endl;
      cout<<"Edad: "<<alumnos[pos].edad<<endl;
      cout<<"Promedio: "<<alumnos[pos].promedio<<endl;

      getchar();
      return 0;
}