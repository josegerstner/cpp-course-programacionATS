/* 2. Realice un programa que lea de la entrada estándar números hasta que 
se introduzca un cero. En ese momento el programa debe terminan y mostrar en
la salida estándar el número de valores mayores que cero leídos */

#include<iostream>

using namespace std;

int main() {
    int numero, counter=0;

    do {
        cout<<"Ingrese un número: ";
        cin>>numero; cin.ignore();

        if(numero>0){
            counter++;
        }

    } while (numero!=0);

    cout<<"\nSe han leído "<<counter<<" números mayores que cero."<<endl;
    cout<<endl<<endl;

    getchar();

    return 0;
}