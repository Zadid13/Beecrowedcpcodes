#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fac;
    cout<<"Enter Number To Find The Factorial:";
    cin>>n;
    fac=1;
    while(n>=1)
    {
        fac=fac*n;
        n--;
    }
    cout<<"\nFactorial is "<<fac<<":";


    return 0;
}


//https://www.youtube.com/watch?v=rtev1fnMXqo
