/* Pasar una palabra a MAYUSCULAS - Función strupr() */

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
      char cadena[] = "Jose";

      strupr(cadena);

      cout<<cadena<<endl;

      getchar();
      return 0;
}