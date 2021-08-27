/* 7. Realiza un programa que defina dos vectores de caracteres y después almacene el
contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
del primer vector seguido por los elementos del segundo vector. Muestre el contenido
del nuevo vector en la salida estándar */

#include<iostream>

using namespace std;

int main() {
    char    
        letras1[]={'a', 'b', 'c', 'd', 'e'},
        letras2[] = {'f', 'g', 'h', 'i', 'j'},
        letras3[10];
    
    for(int i=0; i<5; i++){
        letras3[i] = letras1[i];
    }

    for(int i=5; i<10; i++){
        letras3[i] = letras2[i-5];
    }

    cout<<"\nEl nuevo vector es: ";

    for(int i=0; i<10; i++){
        cout<<letras3[i]<<" ";
    }

    cout<<endl;

    getchar();

    return 0;
}