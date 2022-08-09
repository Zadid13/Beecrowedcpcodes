#include <bits/stdc++.h>
using namespace std;
int main()

{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int X,Y;
    double r1=4.00,r2=4.50,r3=5.00,r4=2.00,r5=1.50;
    cin>>X>>Y;

    if(X==1)
    {
        cout<<fixed;
        cout<<setprecision(2)<<"Total: R$ "<<Y*r1<<endl;
    }
    else if(X==2)
    {

        cout<<fixed;
        cout<<setprecision(2)<<"Total: R$ "<<Y*r2<<endl;
    }
    else if(X==3)
    {
        cout<<fixed;
        cout<<setprecision(2)<<"Total: R$ "<<Y*r3<<endl;
    }
    else if(X==4)
    {
        cout<<fixed;
        cout<<setprecision(2)<<"Total: R$ "<<Y*r4<<endl;
    }
    else if(X==5)
    {
        cout<<fixed;
        cout<<setprecision(2)<<"Total: R$ "<<Y*r5<<endl;
    }



    return 0;

}
//https://www.beecrowd.com.br/judge/en/problems/view/1038
