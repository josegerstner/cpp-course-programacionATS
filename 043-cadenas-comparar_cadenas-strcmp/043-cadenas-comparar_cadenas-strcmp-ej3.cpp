/* 3. Pedir al usuario que digite dos cadenas de caracteres, e indicar si ambas
cadenas son iguales, en caso de no serlo, indicar cuál es mayor alfabéticamente. */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char palabra1[100], palabra2[100];

    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(palabra1, 100, '\n'); cin.ignore();
    cout<<"Ingrese otra cadena de caracteres: ";
    cin.getline(palabra2, 100, '\n'); cin.ignore();

    if(strcmp(palabra1, palabra2)==0){
        cout<<"\nAmbas cadenas son iguales."<<endl;
    } else if(strcmp(palabra1, palabra2)>0){
        cout<<palabra1<<" está después alfabéticamente."<<endl;
    } else if(strcmp(palabra1, palabra2)<0){
        cout<<palabra2<<" está después alfabéticamente."<<endl;
    } else {
        cout<<"\nAmbas cadenas son diferentes."<<endl;
    }

    getchar();
    return 0;
}