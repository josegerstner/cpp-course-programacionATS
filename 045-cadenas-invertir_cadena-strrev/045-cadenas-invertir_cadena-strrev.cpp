/* Añadir o concatenar una cadena con otra - Función strcat() */

#include<iostream>
#include<string.h>

using namespace std;

// no está disponible en linux...
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main() {
    char cadena[] = "Jose";

    strrev(cadena);

    cout<<cadena<<endl;    

    getchar();
    return 0;
}