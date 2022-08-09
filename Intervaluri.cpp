#include <bits/stdc++.h>
using namespace std;
int main ()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    float n ;
    cin>>n;
    if(0.00<=n && n<=25.00 )
    {
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if( n>25.00 && n<=50.00 && 0.00<n<=100.00)
    {

        cout<<"Intervalo (25,50]"<<endl;

    }

    else if( n>50.00 && n<=75.00 && 0.00<n<=100.00)
    {

        cout<<"Intervalo (50,75]"<<endl;
    }

    else if( n>75.00 && n<=100.00 && 0.00<n<=100.00)
    {

        cout<<"Intervalo (75,100]"<<endl;
    }
    else if(0.00>n || n>100.00)
    {

        cout<<"Fora de intervalo"<<endl;
    }
    return 0;

}

//https://www.beecrowd.com.br/judge/en/problems/view/1037
