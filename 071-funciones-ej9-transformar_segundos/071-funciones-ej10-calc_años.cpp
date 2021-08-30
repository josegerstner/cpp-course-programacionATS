/* 10. Escriba una función llamada calc_años() que tenga un parámetro entero que represente
el número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes
y día. La función es calcular el año, mes y día actual para el número dado de días que se le
transmitan. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días. */

#include<iostream>

using namespace std;

void calc_anios(int, int&,int&,int&);

int main(){
      int totalDias, anio=0, mes=1, dia=1;

      cout<<"\nDigite el número total de días: ";
      cin>>totalDias;

      calc_anios(totalDias, anio, mes, dia);

      cout<<"\nAño: "<<anio<<endl;
      cout<<"Mes: "<<mes<<endl;
      cout<<"Día: "<<dia<<endl;

      getchar();
      return 0;
}

void calc_anios(int totDias, int& anio, int& mes, int& dia){
      anio = totDias/365 + 2000;
      totDias %= 365;

      mes = totDias/30 + 1;
      dia = totDias%30 + 1;
}