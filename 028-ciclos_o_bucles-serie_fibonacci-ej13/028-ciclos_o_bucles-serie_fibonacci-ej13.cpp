/* 13. Hacer un programa que realice la serie fibonacci:
=> 1 1 2 3 5 8 13 ... n */
#include<iostream>

using namespace std;

int main() {
    int numero, x=0, y=1, z=1;

    cout<<"Digite un número: ";
    cin>>numero; cin.ignore();

    cout<<z<<" ";

    for(int i=1; i<=numero; i++){
        z = x + y;
        cout<<z<<" ";

        x = y;
        y = z;
    }

    cout<<endl;

    getchar();

    return 0;
}