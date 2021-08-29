/* 6. Convertir dos cadenas de minúsculas a MAYUSCULAS.
Compararlas y decir si son iguales o no */

#include<iostream>
#include<string.h>

using namespace std;

// NO ESTÁ PARA LINUX
char* strupr(char* s) {
      char* tmp = s;
      for (;*tmp;++tmp) {
            *tmp = toupper((unsigned char) *tmp);
      }
      return s;
}

int main() {
    char cadena1[100],
    cadena2[100];

    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena1,100,'\n');
    cin.ignore();

    cout<<"Ingrese otra cadena de caracteres: ";
    cin.getline(cadena2,100,'\n');
    cin.ignore();

    strupr(cadena1);
    strupr(cadena2);

    if(strcmp(cadena1, cadena2) == 0){
        cout<<"Las palabras son iguales."<<endl;
    } else {
        cout<<"Las palabras NO son iguales."<<endl;
    }
    
    getchar();
    return 0;
}