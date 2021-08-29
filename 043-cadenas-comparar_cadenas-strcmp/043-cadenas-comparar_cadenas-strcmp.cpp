/* Comparar cadenas - Función strcmp() */

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char palabra1[] = "becerro",
    palabra2[] = "avión";

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