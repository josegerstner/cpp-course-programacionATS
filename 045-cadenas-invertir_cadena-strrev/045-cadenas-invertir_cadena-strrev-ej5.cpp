/* 5. Hacer un programa que determine si una palabra es políndroma */

#include<iostream>
#include<string.h>

using namespace std;

// no está disponible en linux...
char *strrev(char *str) {
    char *p1, *p2;
    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main() {
    char cadena[100],
    copiaCadena[100];

    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena,100,'\n');
    cin.ignore();

    strcpy(copiaCadena, cadena);
    strrev(copiaCadena);

    if(strcmp(copiaCadena, cadena) == 0){
        cout<<"La palabra es palíndroma."<<endl;
    } else {
        cout<<"La palabra NO es palíndroma."<<endl;
    }
    
    getchar();
    return 0;
}