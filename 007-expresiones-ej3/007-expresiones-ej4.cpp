// 4. Escribe la siguiente expresión matemática como expresión en C++
// d) a + (b/(c-d))

#include<iostream>

using namespace std;

int main() {
    float a, b, c, d, result=0;
    
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;

    result = a + (b/(c-d));

    cout.precision(3);
    cout<<"\nEl resultado es: "<<result<<endl;

    return 0;
}