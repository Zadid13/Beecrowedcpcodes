#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,temp,rev=0;
    cout<<"Enter Number To Check for Palindrome:";
    cin>>i;
    temp=i;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if (rev==temp)
    {
        cout<<"\nPalindrome";
    }
    else
    {

        cout<<"\nNotPalindrome";
    }
    return 0;
}
//https://www.youtube.com/watch?v=jcFN_D6tr6o
