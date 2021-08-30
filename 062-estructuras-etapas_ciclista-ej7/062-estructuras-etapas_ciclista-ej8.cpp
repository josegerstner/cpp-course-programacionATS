/* 8. Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona y un valor del tipo
lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga
las personas con discapacidad. */

#include<iostream>
#include<string.h>

using namespace std;

struct Persona{
      char nombre[20];
      bool tiene_discapacidad;
};

int main() {
      int numero_personas=0,
      cantidad_con_discapacidad=0,
      cantidad_sin_discapacidad=0,
      contador_con_discapacidad=0,
      contador_sin_discapacidad=0;

      cout<<"Digite la cantidad de personas: ";
      cin>>numero_personas; cin.ignore(); fflush(stdin);

      struct Persona personas[numero_personas];

      for(int i=0; i<numero_personas; i++){
            fflush(stdin);
            cout<<"\nPersona *"<<i+1<<"*:"<<endl;
            cout<<"Nombre: ";
            fflush(stdin);
            cin.getline(personas[i].nombre,20,'\n'); fflush(stdin);
            cout<<"Tiene discapacidad?\t0.no\t1.si : ";
            fflush(stdin);
            cin>>personas[i].tiene_discapacidad; cin.ignore(); fflush(stdin);

            if(personas[i].tiene_discapacidad==1){
                  cantidad_con_discapacidad++;
            }
      }

      cantidad_sin_discapacidad = numero_personas - cantidad_con_discapacidad;

      struct Persona personas_con_discapacidad[cantidad_con_discapacidad],
      personas_sin_discapacidad[cantidad_sin_discapacidad];

      for(int i=0; i<numero_personas; i++){
            if(personas[i].tiene_discapacidad==1){
                  strcpy(personas_con_discapacidad[contador_con_discapacidad].nombre, 
                        personas[i].nombre);
                  personas_con_discapacidad[contador_con_discapacidad].tiene_discapacidad= 
                        personas[i].tiene_discapacidad;
                  contador_con_discapacidad++;
            } else {
                  strcpy(personas_sin_discapacidad[contador_sin_discapacidad].nombre, 
                        personas[i].nombre);
                  personas_sin_discapacidad[contador_sin_discapacidad].tiene_discapacidad= 
                        personas[i].tiene_discapacidad;
                  contador_sin_discapacidad++;
            }
      }

      cout<<"\nLas personas con discapacidad son: "<<endl;
      for(int i=0; i<contador_con_discapacidad; i++){
            cout<<"Nombre: "<<personas_con_discapacidad[i].nombre<<endl;
      }
      
      cout<<"\nLas personas sin discapacidad son: "<<endl;
      for(int i=0; i<contador_sin_discapacidad; i++){
            cout<<"Nombre: "<<personas_sin_discapacidad[i].nombre<<endl;
      }

      getchar();
      return 0;
}