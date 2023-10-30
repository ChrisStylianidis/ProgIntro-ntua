//sumpowchris.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,N,calc1,calc2,a,b,c,d,e,f,g,h,A[10];
    cin>>N;
    for(i=0;i<10;i++){
        A[i]=pow(i,N);
        }
    for(a=0;a<=9;a++)
    for(b=0;b<=9;b++)
    for(c=0;c<=9;c++)
    for(d=0;d<=9;d++)
    for(e=0;e<=9;e++)
    for(f=0;f<=9;f++)
    for(g=0;g<=9;g++)
    for(h=0;h<=9;h++){
        calc1=A[a]+A[b]+A[c]+A[d]+A[e]+A[f]+A[g]+A[h];
        calc2=(h+g*10+f*100+e*1000+d*10000+c*100000+b*1000000+a*10000000);
        if(calc1==calc2)
        cout<<calc1<<endl;}
return 0;}
