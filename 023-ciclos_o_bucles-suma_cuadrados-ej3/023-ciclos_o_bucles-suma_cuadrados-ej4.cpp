/* 4. Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola en un período de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la más alta y la más baja */

#include<iostream>

using namespace std;

int main() {
    float temperatura, temperatura_media=0,
        temperatura_alta=0, temperatura_baja=0;
    
    int i=1;

    do {
        cout<<"Ingrese la temperatura "<<i<<": ";
        cin>>temperatura;
        cin.ignore();

        if(i==1){
            temperatura_baja = temperatura_alta = temperatura;
        } else {
            if(temperatura>temperatura_alta){
                temperatura_alta = temperatura;
            }
            if(temperatura<temperatura_baja){
                temperatura_baja = temperatura;
            }
        }
        temperatura_media+=temperatura;
        i++;
    }while(i<=6);
    
    temperatura_media/=6;

    cout.precision(3);

    cout<<"\n*****************************************"<<endl;
    cout<<"* La temperatura media del día es: "<<temperatura_media<<" *"<<endl;
    cout<<"* La temperatura alta es: "<<temperatura_alta<<"            *"<<endl;
    cout<<"* La temperatura baja es: "<<temperatura_baja<<"            *"<<endl;
    cout<<"*****************************************"<<endl;

    getchar();

    return 0;
}