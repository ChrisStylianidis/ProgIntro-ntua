//cb3.cpp
#include<cstdio>


int main(){
int n,T;
int *cbs=new int[1001];
for(int i=0;i<=1000;i++){
    cbs[i]=i*i*i;
}

scanf("%d",&T);
for(int i=0;i<T;i++){
    scanf("%d",&n);
    int counter=0;
    int a,b,c;
    for(a=0;a<=1000;a++){
        if(cbs[a]>n)break;
        c=1000;
        for(b=a;b<=1000;b++){
            if(cbs[a]+cbs[b]>n)break;
            while(cbs[a]+cbs[b]+cbs[c] > n){
                c--;}
        if (c<b) break;
        if(cbs[a]+cbs[b]+cbs[c]==n)
            counter++;

        }


    }


    printf("%d\n",counter);
    }


return 0;}
