#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,d;
    double x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout.precision(4);
    cout<<fixed<<d<<endl;
    return 0;


}
//https://www.beecrowd.com.br/judge/en/problems/view/1015
