/* 7. La calificación final de un estudiante es la media ponderada de tres notas.
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 
60% y la nota de la participación que cuenta el 10% restante.
Escriba un programa que lea de la entrada estándar las tres notas de un alimno
y escriba en la salida estándar su nota final */

#include<iostream>

using namespace std;

int main() {
    float practica, teorica, participacion, notaFinal=0;
    
    cout<<"Ingrese la nota de práctica del alumno: "; cin>>practica;
    cout<<"Ingrese la nota teórica del alumno: "; cin>>teorica;
    cout<<"Ingrese la nota de participación del alumno: "; cin>>participacion;

    practica *= 0.3;
    teorica *= 0.6;
    participacion *= 0.1;

    notaFinal = practica + teorica + participacion;

    cout.precision(3);
    cout<<"\nLa nota final del alumno es: "<<notaFinal<<endl;

    return 0;
}