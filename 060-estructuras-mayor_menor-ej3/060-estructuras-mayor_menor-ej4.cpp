/* 4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los
siguientes campos: nombre, pais, numero_medallas y devuelva los datos (nombre, pais)
del atleta que ha ganado el mayor numero de medallas. */

#include<iostream>
#include<string.h>

using namespace std;

struct Atleta{
      char nombre[20];
      char pais[20];
      int numero_medallas;
};

int main() {
      int cantidad_atletas, mayor=0, pos;

      cout<<"Digite el número de atletas: ";
      cin>>cantidad_atletas; cin.ignore(); fflush(stdin);

      struct Atleta atletas[cantidad_atletas];

      for(int i=0; i<cantidad_atletas; i++){
            cout<<"Atleta nro: "<<i+1<<endl;

            fflush(stdin);
            cout<<"Digite su nombre: ";
            cin.getline(atletas[i].nombre, 20, '\n'); fflush(stdin);
            cout<<"Digite su país: ";
            cin.getline(atletas[i].pais, 20, '\n'); fflush(stdin);
            cout<<"Digite las medallas ganadas: ";
            cin>>atletas[i].numero_medallas; cin.ignore(); fflush(stdin);
            
            if(atletas[i].numero_medallas>mayor){
                  mayor = atletas[i].numero_medallas;
                  pos = i;
            }
      }

      cout<<"\nEl atleta con más medallas es: "<<endl;
      cout<<"Nombre: "<<atletas[pos].nombre<<endl;
      cout<<"País: "<<atletas[pos].pais<<endl;

      getchar();
      return 0;
}