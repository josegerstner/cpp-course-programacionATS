/* Hacer una estructura llamada corredor, en la cual se tendrán los siguientes
campos: nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignar
una categoría de competición
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años 
Posteriormente imprimir todos los datos del corredor, incluida su categoría de 
competición */

#include<iostream>
#include<string.h>

using namespace std;

struct corredor{
      char nombre[20];
      int edad;
      char sexo[10];
      char club[20];
}c1;

int main() {
      char categoria[20];

      fflush(stdin);
      cout<<"Nombre: "; cin.getline(c1.nombre,20,'\n'); fflush(stdin);
      cout<<"Edad: "; cin>>c1.edad; cin.ignore(); fflush(stdin);
      cout<<"Sexo: "; cin.getline(c1.sexo,10,'\n'); fflush(stdin);
      cout<<"Club: "; cin.getline(c1.club,20,'\n'); fflush(stdin);


      if(c1.edad<=18){
            strcpy(categoria, "Juvenil");
      } else if(c1.edad <=40){
            strcpy(categoria, "Senior");
      } else {
            strcpy(categoria, "Veterano");
      }

      cout<<"\nNombre: "<<c1.nombre<<endl;
      cout<<"Edad: "<<c1.edad<<endl;
      cout<<"Sexo: "<<c1.sexo<<endl;
      cout<<"Club: "<<c1.club<<endl;
      cout<<"Categoría: "<<categoria<<endl;

      getchar();
      return 0;
}