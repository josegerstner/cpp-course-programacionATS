/* La sentencia do-while

    do {
        conjunto de instrucciones;
    } while(expresión lógica)
*/

#include<iostream>

using namespace std;

int main() {
    int i;

    i=10;

    do {
        cout<<i<<endl;
        i--;
    }while(i>=1);  

    getchar();
    
    return 0;
}