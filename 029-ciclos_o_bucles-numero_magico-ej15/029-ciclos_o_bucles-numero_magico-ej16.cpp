/* 16. Realice un programa que calcule la descomposición en factores primos
de un número entero. Por ejemplo: 20 = 2 * 2 * 5 */

#include<iostream>
#include<time.h>

using namespace std;

bool isPrimo(int primo){
    int divisor = 1, divisores = 0;
    do{
        if(primo % divisor == 0){
            divisores++;
        }
        divisor++;
    }while(divisor <= primo);
    if(divisores == 2){
        return true;
    }else{
        return false;
    }
}

int main() {
    int numero, primo = 0, aux=0;
    
    cout<<"Ingrese numero: ";
    cin>>numero;
    cin.ignore();

    aux=numero;

    cout<<"\nLa descomposición del número es: ";

    for(primo=numero; primo>1; primo--){
        if(isPrimo(primo)){
            while(aux % primo == 0) {
                if(aux != numero){
                    cout<<" * ";
                }
                aux /= primo;
                cout<<primo<<" ";
            }
        }
    }

    cout<<endl;

    getchar();

    return 0;
}