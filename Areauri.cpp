#include<bits/stdc++.h>
using namespace std;
int main()
{

    float A,B,C;
    double n,c,t,q,r;
    cin>>A>>B>>C;
    n=(A*C)/2;
    c=3.14159*C*C;
    t=0.5*C*(A+B);
    q=B*B;
    r=A*B;
    cout.precision(3);
    cout<<fixed<<"TRIANGULO: "<<n<<endl;
    cout<<fixed<<"CIRCULO: "<<c<<endl;
    cout<<fixed<<"TRAPEZIO: "<<t<<endl;
    cout<<fixed<<"QUADRADO: "<<q<<endl;
    cout<<fixed<<"RETANGULO: "<<r<<endl;



    return 0;

//https://www.beecrowd.com.br/judge/en/problems/view/1012

}

