/* La sentencia while

    while(expresión lógica){
        conjunto de instrucciones;
    } 
*/

#include<iostream>
// #include<conio.h>

using namespace std;

int main() {
    int i;

    i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    getchar();
    
    return 0;
}