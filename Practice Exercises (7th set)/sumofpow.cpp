//sumofpow.cpp
#include<cstdio>
#include<cmath>
int main(){
int n,T;
int p2[22],p3[14],p5[9];

//scanf("%d",&n);
n=12;
int orio2,orio3,orio5;
orio2=log(n)/log(2);
orio3=log(n)/log(3);
orio5=log(n)/log(5);
for(int i=0;i<=orio2;i++){
    p2[i]=pow(2,i);
    if(i<=orio3)
    p3[i]=pow(3,i);
    if(i<=orio5)
    p5[i]=pow(5,i);}

    int counter=0;
for(int i=0;i<=orio2;i++){
    for(int j=0;j<=orio3;j++){
        for(int k=0;k<=orio5;k++){
            if(p2[i]+p3[j]+p5[k]==n){
                counter++;
                printf("2^%d+3^%d+5^%d = %d+%d+%d\n",i,j,k,p2[i],p3[j],p5[k]);}


        }

    }


    }
    printf("%d\n",counter);


return 0;}
