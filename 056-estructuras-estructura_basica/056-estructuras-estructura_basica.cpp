/* Estructura básica en C++ */

#include<iostream>

using namespace std;

struct Persona{
      char nombre[20];
      int edad;
}
persona1 = {"Jose", 33},
persona2 = {"Ruperto", 40},
persona3
;

int main() {
      cout<<"Nombre1: "<<persona1.nombre<<endl;
      cout<<"Edad1: "<<persona1.edad<<endl;

      cout<<"\nNombre2: "<<persona2.nombre<<endl;
      cout<<"Edad2: "<<persona2.edad<<endl;

      cout<<"\n***************************"<<endl;
      cout<<"\nNombre3: ";
      cin.getline(persona3.nombre, 20, '\n'); cin.ignore();
      cout<<"Edad3: ";
      cin>>persona3.edad;
      cout<<"\n***************************"<<endl;

      cout<<"Nombre3: "<<persona3.nombre<<endl;
      cout<<"Edad3: "<<persona3.edad<<endl;

      getchar();
      return 0;
}