#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int hemp=c-a;
    int temp=d-b;
    if(0<=hemp<=24 && temp>=1)
    {
        cout<<"O JOGO DUROU "<<hemp<<" HORA(S)"<<" E "<<temp<<" MINUTO(S)"<<endl;
    }




    return 0;


}
//https://www.beecrowd.com.br/judge/en/problems/view/1047
