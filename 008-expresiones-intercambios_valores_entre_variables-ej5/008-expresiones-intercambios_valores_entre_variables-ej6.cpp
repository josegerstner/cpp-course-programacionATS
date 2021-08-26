/* 5. Escriba un programa que lea la nota final de cuatro alumnos y calcule
la nota final media de los cuatro alumnos */

#include<iostream>

using namespace std;

int main() {
    int notaAlumno1, notaAlumno2, notaAlumno3, notaAlumno4;
    float notaFinalMedia=0;
    
    cout<<"Ingrese la nota final del primer alumno: "; cin>>notaAlumno1;
    cout<<"Ingrese la nota final del segundo alumno: "; cin>>notaAlumno2;
    cout<<"Ingrese la nota final del tercer alumno: "; cin>>notaAlumno3;
    cout<<"Ingrese la nota final del cuarto alumno: "; cin>>notaAlumno4;

    notaFinalMedia = float (notaAlumno1+notaAlumno2+notaAlumno3+notaAlumno4)/4;

    cout.precision(3);
    cout<<"\nLa nota final media entre los 4 alumnos es: "<<notaFinalMedia<<endl;

    return 0;
}