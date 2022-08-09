#include <bits/stdc++.h>
using namespace std;
int main()
{


    int r1,n1,r2,n2;
    double p1,p2,v;

    cin>>r1>>n1>>p1;
    cin>>r2>>n2>>p2;
    v=(p1*n1)+(p2*n2);
    cout.precision(2);

    cout<<fixed<<"VALOR A PAGAR: R$ "<<v<<endl;


    return 0;

    //https://www.beecrowd.com.br/judge/en/problems/view/1010
}

