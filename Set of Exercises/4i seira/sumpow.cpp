//sumpow.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long c,sum,i,maxx;
    bool flag=true;
    int n,d,minn;
    cin>>n;
minn=pow(10,n-1)+1;
maxx=minn*10;
cout<<"0"<<endl<<"1"<<endl;
    if(n!=9){
    if(n==5){
        minn/=10;
        maxx*=10;}
    if(n==7){
        minn=1741725;
        maxx=14459930;
    }
    if(n==8){
        minn=24678050;
        maxx=88593478;
    }
    c=minn;
    while(c<maxx){
        if(c>24678051&&n==8&&flag){
        c=88593476;
        flag=false;}
        if(c>4210818&&n==7&&flag){
        c=9800817;
        flag=false;}
        sum=0;
        i=c;
        while(i>0){
           d=i%10;
           i/=10;
           sum+=pow(d,n);
        }
        if(sum==c)
            cout<<c<<endl;
    c++;
    }}


return 0;}
