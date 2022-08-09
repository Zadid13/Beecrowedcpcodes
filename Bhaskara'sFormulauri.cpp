#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(5);

    double A,B,C;
    cin>>A>>B>>C;
    double temp =(B*B-4*A*C);
    if(temp<0|| A==0)
    {

        cout<<"Impossivel calcular"<<endl;

    }

    else
    {
        double r1=(-B+sqrt(temp))/(2*A);
        double r2=(-B-sqrt(temp))/(2*A);

        cout<<"R1 = "<<r1<<endl;
        cout<<"R2 = "<<r2<<endl;
    }

    return 0;


}
//https://www.beecrowd.com.br/judge/en/problems/view/1036
