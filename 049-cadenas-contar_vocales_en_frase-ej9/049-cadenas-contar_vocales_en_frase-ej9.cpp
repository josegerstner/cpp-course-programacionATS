/* 9. Realice un programa que lea una cadena de caracteres de la entrada estándar
y muestre en la salida estándar cuántas ocurrencias de cada vocal existen
en la cadena */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
      int vocalA=0, vocalE=0, vocalI=0,
      vocalO=0, vocalU=0, tamanio=30;
      char frase[tamanio];

      cout<<"Ingrese una frase: ";
      cin.getline(frase,tamanio,'\n');
      cin.ignore();

      for(int i=0; i<tamanio; i++){
            switch(frase[i]){
                  case 'A': vocalA++; break;
                  case 'a': vocalA++; break;
                  case 'E': vocalE++; break;
                  case 'e': vocalE++; break;
                  case 'I': vocalI++; break;
                  case 'i': vocalI++; break;
                  case 'O': vocalO++; break;
                  case 'o': vocalO++; break;
                  case 'U': vocalU++; break;
                  case 'u': vocalU++; break;
                  default: break;
            }
      }

      cout<<"En la frase: "<<frase<<endl;
      cout<<"Hay "<<vocalA<<" vocales 'a'."<<endl;
      cout<<"Hay "<<vocalE<<" vocales 'e'."<<endl;
      cout<<"Hay "<<vocalI<<" vocales 'i'."<<endl;
      cout<<"Hay "<<vocalO<<" vocales 'o'."<<endl;
      cout<<"Hay "<<vocalU<<" vocales 'u'."<<endl;

      getchar();
      return 0;
}