/* Pasar una palabra a minúsculas - Función strlwr() */

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
      char cadena[] = "PROGRAMACIONATS";

      strlwr(cadena);

      cout<<cadena<<endl;

      getchar();
      return 0;
}