// 3. Escribe la siguiente expresión matemática como expresión en C++
// c) (a+(b/c))/(d+(e/f))

#include<iostream>

using namespace std;

int main() {
    float a, b, c, d, e, f, result=0;
    
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;
    cout<<"Digite el valor de e: "; cin>>e;
    cout<<"Digite el valor de f: "; cin>>f;

    result = (a+(b/c))/(d+(e/f));

    cout.precision(3);
    cout<<"\nEl resultado es: "<<result<<endl;

    return 0;
}