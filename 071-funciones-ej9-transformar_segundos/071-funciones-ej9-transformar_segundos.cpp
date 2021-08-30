/* 9. Escriba una función llamada tiempo() que tenga un parámetro en número entero llamado
totalSeg y tres parámetros de referencia enteros llamados horas, min y seg. La función es
convertir el número de segundos transmitido en un número equivalente en horas, minutos
y segundos. */

#include<iostream>

using namespace std;

void tiempo(int, int&,int&,int&);

int main(){
      int totalSeg, horas=0, min=0, seg=0;

      cout<<"\nDigite el número total de segundos: ";
      cin>>totalSeg;

      tiempo(totalSeg, horas, min, seg);

      cout<<"\nHoras: "<<horas<<endl;
      cout<<"Minutos: "<<min<<endl;
      cout<<"Segundos: "<<seg<<endl;

      getchar();
      return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg){
      horas = totalSeg/3600;
      totalSeg %= 3600;

      min = totalSeg/60;
      seg = totalSeg%60;
}