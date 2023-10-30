//maxfact.cpp
#include<cstdio>
int fac(int n){
    int b=1;
    while(n>1){
        b*=n;
        n--;
    }
    return b;}
int main(){
    int counter=0,n,i=1;
scanf("%d",&n);
while(fac(i)<=n){
    counter++;
    i++;
}

printf("%d\n",counter);


return 0;}
