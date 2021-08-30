/* 6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para 
n alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos. */

#include<iostream>
#include<string.h>

using namespace std;

struct Promedio{
      float nota1;
      float nota2;
      float nota3;
};

struct Alumno{
      char nombre[20];
      char sexo[10];
      int edad;
      struct Promedio promedio;
};

int main() {
      int cantidad_alumnos=0, pos=0;
      float promedio=0, mejor_promedio=0;

      cout<<"Digite la cantidad de alumnos: ";
      cin>>cantidad_alumnos; cin.ignore(); fflush(stdin);

      struct Alumno alumnos[cantidad_alumnos];

      for(int i=0; i<cantidad_alumnos; i++){
            fflush(stdin);
            cout<<"************************\n-Alumno "<<i<<":"<<endl;
            cout<<"Digite el nombre del alumno: ";
            cin>>alumnos[i].nombre; fflush(stdin);
            cout<<"Digite el sexo del alumno: ";
            cin>>alumnos[i].sexo; fflush(stdin);
            cout<<"Digite la edad del alumno: ";
            cin>>alumnos[i].edad; cin.ignore(); fflush(stdin);
            cout<<"Digite la nota 1 del alumno: ";
            cin>>alumnos[i].promedio.nota1; cin.ignore(); fflush(stdin);
            cout<<"Digite la nota 2 del alumno: ";
            cin>>alumnos[i].promedio.nota2; cin.ignore(); fflush(stdin);
            cout<<"Digite la nota 3 del alumno: ";
            cin>>alumnos[i].promedio.nota3; cin.ignore(); fflush(stdin);

            promedio = (alumnos[i].promedio.nota1 + alumnos[i].promedio.nota2 + alumnos[i].promedio.nota3)/3;

            if(promedio>mejor_promedio){
                  mejor_promedio = promedio;
                  pos = i;
            }
      }



      cout.precision(3);
      cout<<"\nEl alumno "<<alumnos[pos].nombre;
      cout<<" de sexo "<<alumnos[pos].sexo<<" de "<<alumnos[pos].edad<<" años ";
      cout<<"tiene un promedio de "<<mejor_promedio<<endl;
      

      getchar();
      return 0;
}