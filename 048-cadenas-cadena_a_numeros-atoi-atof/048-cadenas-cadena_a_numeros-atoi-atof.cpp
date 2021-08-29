/* Transformar una cadena a números - Función atoi() atof() */

// ATOI (array to int)
// "123" -> 123

// ATOF (array to float)
// "123.45" -> 123.45

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
      char entero[] = "123",
      flotante[]="123.456";
      int numero; float decimal;

      numero = atoi(entero);
      decimal = atof(flotante);

      cout<<numero<<endl;
      cout<<decimal<<endl;

      getchar();
      return 0;
}