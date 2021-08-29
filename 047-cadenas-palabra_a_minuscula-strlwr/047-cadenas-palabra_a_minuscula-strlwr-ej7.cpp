/* 7. Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A,
convertir su nombre a minúsculas, caso contrario no convertirlo */

#include<iostream>
#include<string.h>

using namespace std;

// NO ESTÁ PARA LINUX
char* strlwr(char* s) {
      char* tmp = s;
      for (;*tmp;++tmp) {
            *tmp = tolower((unsigned char) *tmp);
      }
      return s;
}

int main() {
    char nombre[100];

    cout<<"Ingrese su nombre en mayúsculas: ";
    cin.getline(nombre,100,'\n');
    cin.ignore();

    if(nombre[0]=='A'){
        strlwr(nombre);
    }

    cout<<"\nSu nombre es: "<<nombre<<endl;
    
    getchar();
    return 0;
}