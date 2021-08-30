/* 7. Defina una estructura que indique el tiempo empleado por un ciclista en 
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dadas n etapas calcule el tiempo total empleado en
correr todas las etapas */

#include<iostream>
#include<string.h>

using namespace std;

struct Etapas{
      int horas;
      int minutos;
      int segundos;
};

int main() {
      int numero_etapas=0,
      total_horas=0, total_minutos=0, total_segundos=0;
      float promedio=0;

      cout<<"Digite la cantidad de etapas: ";
      cin>>numero_etapas; cin.ignore(); fflush(stdin);

      struct Etapas etapas[numero_etapas];

      for(int i=0; i<numero_etapas; i++){
            fflush(stdin);
            cout<<"\nEtapa "<<i;
            cout<<"Horas: ";
            cin>>etapas[i].horas; cin.ignore(); fflush(stdin);
            cout<<"Minutos: ";
            cin>>etapas[i].minutos; cin.ignore(); fflush(stdin);
            cout<<"Segundos: ";
            cin>>etapas[i].segundos; cin.ignore(); fflush(stdin);

            total_horas += etapas[i].horas;
            total_minutos += etapas[i].minutos;
            total_segundos += etapas[i].segundos;

            while(total_segundos>60){
                  total_segundos-=60;
                  total_minutos++;
            }
            
            while(total_minutos>60){
                  total_minutos-=60;
                  total_horas++;
            }
      }


      cout<<"\nEl corredor tardará "<<total_horas;
      cout<<" horas, "<<total_minutos<<" minutos y ";
      cout<<total_segundos<<" segundos en terminar las ";
      cout<<numero_etapas<<" etapas."<<endl;
      

      getchar();
      return 0;
}