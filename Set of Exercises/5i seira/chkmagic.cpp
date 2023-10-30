//chkmagic.cpp
#include<iostream>
using namespace std;
bool arithmoi(int A[],int n){
int i;
for(i=0;i<n*n;i++)
    if(A[i]==0)
        return false;
return true;}


int main(){
int n,i,j,A[150][150],ch1[150*150]={},gra,sti,sumlast=0,d=0;//gra=grami sti=stili d=diagonios
bool numbers,sums1=true,sums2=true,sums3=true,sum=false;
cin>>n;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>A[i][j];
//gia na vro an einai oi arithmoi apo to 0~n*n-1
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        ch1[A[i][j]]++;
numbers=arithmoi(ch1,n);//done

if(numbers){//an den einai oloi oi arithmoi den mpeno ston kopo na elegkso
for(i=0;i<n;i++)
    sumlast+=A[0][i];
for(i=1;i<n;i++){//elegxo ta sums gia tis grammes
    gra=0;
    for(j=0;j<n;j++){
        gra+=A[i][j];
    }
    if(gra!=sumlast){
        sums1=false;}
    sumlast=gra;
}
sumlast=gra;
for(i=0;i<n;i++){
    sti=0;
    for(j=0;j<n;j++){
        sti+=A[j][i];
    }
    if(sti!=sumlast){
        sums2=false;}
    sumlast=gra;}
for(i=0;i<n;i++)
    d+=A[i][i];
if(d!=sumlast){
    sums3=false;}
d=0;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(i+j==n-1)
            d+=A[i][j];
if(d!=sumlast){
    sums3=false;}
    }//end elegxou
if(sums1&&sums2&&sums3)
    sum=true;
if(sum&&numbers)
    cout<<"yes"<<endl;
else
    cout<<"no"<<endl;



return 0;}
