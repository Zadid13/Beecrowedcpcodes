#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A,B,temp;
    cin>>A>>B;
    if(A<B)
    {

        temp=A;
        A=B;
        B=temp;


    }
    if(A%B==0)
    {
        cout<<"Sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Nao sao Multiplos"<<endl;


    }
    return 0;
}


//https://www.beecrowd.com.br/judge/en/problems/view/1044
