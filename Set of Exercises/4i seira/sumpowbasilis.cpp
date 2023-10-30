//sumpowbasilis.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n,arthimisi=0,a,b,c,d,e,f,g,h,A[10];
    cin>>n;
    for(i=0;i<10;i++)
        A[i]=pow(i,n);
    for(a=0;a<10;a++)
    for(b=0;b<10;b++)
    for(c=0;c<10;c++)
    for(d=0;d<10;d++)
    for(e=0;e<10;e++)
    for(f=0;f<10;f++)
    for(g=0;g<10;g++)
    for(h=0;h<10;h++){
        arthimisi=0;
        arthimisi=A[a]+A[b]+A[c]+A[d]+A[e]+A[f]+A[g]+A[h];
        if(arthimisi==(h+g*10+f*100+e*1000+d*10000+c*100000+b*1000000+a*10000000))
        cout<<arthimisi<<endl;}
return 0;}
