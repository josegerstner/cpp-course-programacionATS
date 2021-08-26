/* 14. En una clase de 5 alumnos se han realizado 3 exámenes y se requiere
determinar el número de:
    a) Alumnos que aprobaron todos los exámenes
    b) Alumnos que aprobaron al menos un examen
    c) Alumnos que aprobaron únicamente el último examen
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas */
#include<iostream>

using namespace std;

int main() {
    int NOTA_APROBACION = 6;
    int primer_examen, segundo_examen, tercer_examen,
    aprobaron_todos=0, aprobaron_al_menos_uno=0, aprobaron_solo_el_ultimo=0;

    for(int i=1; i<=5; i++) {
        cout<<"\nALUMNO "<<i<<endl;
        cout<<"Ingrese la nota del primer examen: ";
        cin>>primer_examen; cin.ignore();
        cout<<"Ingrese la nota del segundo examen: ";
        cin>>segundo_examen; cin.ignore();
        cout<<"Ingrese la nota del tercer examen: ";
        cin>>tercer_examen; cin.ignore();

        if( primer_examen>=NOTA_APROBACION &&
            segundo_examen>=NOTA_APROBACION &&
            tercer_examen>=NOTA_APROBACION){
            aprobaron_todos++;
        }
        if( primer_examen>=NOTA_APROBACION ||
            segundo_examen>=NOTA_APROBACION ||
            tercer_examen>=NOTA_APROBACION){
            aprobaron_al_menos_uno++;
        }
        if( primer_examen<NOTA_APROBACION &&
            segundo_examen<NOTA_APROBACION &&
            tercer_examen>=NOTA_APROBACION){
            aprobaron_solo_el_ultimo++;
        }
    }

    cout<<"************************************"<<endl;
    cout<<"\nAprobaron todos los exámenes: "<<aprobaron_todos<<endl;
    cout<<"Aprobaron al menos un examen: "<<aprobaron_al_menos_uno<<endl;
    cout<<"Aprobaron sólo el último examen: "<<aprobaron_solo_el_ultimo<<endl;

    cout<<endl;

    getchar();

    return 0;
}