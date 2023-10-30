//swaps.cpp
#include<cstdio>
#define nmax 100000
int main(){
int i,n,j,minn=nmax,maxx,arnitika=0;
int *a=new int [nmax];
bool flag=true;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(flag&&a[i]<0){
        minn=a[i];
        flag=false;
    }
    if(a[i]>0)
        maxx=a[i];
    if(a[i]<0)
        arnitika++;
    }
int counter=0;
for(i=0;i<n-1;i++){
    if(a[i]>0){
        counter+=arnitika;
    }
    if(a[i]<0)
        arnitika--;
    }
printf("%d\n%d\n%d\n",counter,minn,maxx);
return 0;}
