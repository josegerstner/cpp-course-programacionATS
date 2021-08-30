/* 5. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otra llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio esté anidada a la estructura
alumno, luego pedir todos los datos para un alumno, luego calcular su
promedio, y por último imprimir todos sus datos incluidos el promedio. */

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
}alumno1;

int main() {
      float promedio=0;

      cout<<"Digite el nombre del alumno: ";
      cin>>alumno1.nombre; fflush(stdin);
      cout<<"Digite el sexo del alumno: ";
      cin>>alumno1.sexo; fflush(stdin);
      cout<<"Digite la edad del alumno: ";
      cin>>alumno1.edad; cin.ignore(); fflush(stdin);
      cout<<"Digite la nota 1 del alumno: ";
      cin>>alumno1.promedio.nota1; cin.ignore(); fflush(stdin);
      cout<<"Digite la nota 2 del alumno: ";
      cin>>alumno1.promedio.nota2; cin.ignore(); fflush(stdin);
      cout<<"Digite la nota 3 del alumno: ";
      cin>>alumno1.promedio.nota3; cin.ignore(); fflush(stdin);

      promedio = (alumno1.promedio.nota1 + alumno1.promedio.nota2 + alumno1.promedio.nota3)/3;

      cout.precision(3);
      cout<<"\nEl alumno "<<alumno1.nombre;
      cout<<" de sexo "<<alumno1.sexo<<" de "<<alumno1.edad<<" años ";
      cout<<"tiene un promedio de "<<promedio<<endl;
      

      getchar();
      return 0;
}