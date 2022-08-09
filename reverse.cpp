#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,rev=0;
              cout<<"Enter Number to be reversed:";
              cin>>i;

    while(i>0)
    {

        rev=(rev*10)+i%10;
        i=i/10;

    }

    cout<<"\nReversed Number is:"<<rev;
    return 0;




}
//https://www.youtube.com/watch?v=4uH2qy-4nDU&t=529s
