#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
system("Color 02");
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<fixed<<setprecision(2);
/*int n;
double b;
b=n;
cin>>n;


cout<<"NOTAS:"<<endl;

cout<<n/100<<" nota(s) de R$ 100.00"<<endl;
n=(n%100);


cout<<n/50<<" nota(s) de R$ 50.00"<<endl;
n=(n%50);

cout<<n/20<<" nota(s) de R$ 20.00"<<endl;
n=(n%20);

cout<<n/10<<" nota(s) de R$ 10.00"<<endl;
n=(n%10);

cout<<n/5<<" nota(s) de R$ 5.00"<<endl;
n=(n%5);

cout<<n/2<<" nota(s) de R$ 2.00"<<endl;



cout<<"MOEDAS:"<<endl;

cout<<b/1.00<<" moeda(s) de R$ 1.00"<<endl;
b=fmod(b,1.00);



cout<<fixed;
cout<<setprecision(0)<<b/0.50<<" moeda(s) de R$ 0.50"<<endl;
b=fmod(b,0.50);

cout<<fixed;
cout<<setprecision(0)<<b/0.25<<" moeda(s) de R$ 0.25"<<endl;
b=fmod(b,0.25);

cout<<fixed;
cout<<setprecision(0)<<b/0.10<<" moeda(s) de R$ 0.10"<<endl;
b=fmod(b,0.10);

cout<<fixed;
cout<<setprecision(0)<<b/0.05<<" moeda(s) de R$ 0.05"<<endl;
b=fmod(b,0.05);

cout<<fixed;
cout<<setprecision(0)<<(b/0.01)<<" moeda(s) de R$ 0.01"<<endl;

return 0;
}*/
double amount;
cin>>amount;
int temp=amount*100;
int t=temp/100;
int p=temp%100;

cout<<"NOTAS:\n";
int notes[6]={100,50,20,10,5,2};
for(int i=0;i<6;i++){
    cout<<t/notes[i]<<" nota(s) de R$ "<<notes[i]<<".00\n";
    t=t%notes[i];
}



p=t*100+p;

cout<<"MOEDAS:\n";
int coins[6]={100,50,25,10,5,1};
for(int i=0;i<6;i++){
    cout<<p/coins[i]<<" moeda(s) de R$ "<<coins[i]/100.0<<"\n";
    p=p%coins[i];
}




return 0;



}
//https://www.youtube.com/watch?v=hDXXr4TZyqk&t=288s

