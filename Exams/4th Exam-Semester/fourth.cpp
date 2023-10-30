//fourth.cpp
#include<cstdio>
#define nmax 1000000
int main(){
    int j,i,n,k,b,maxx=0,sum,sum1=0;
    int *a=new int[nmax];
    scanf("%d %d",&n,&k);
    sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum1+=a[i];
        if(sum1%k==0)
            maxx=i+1;

        }
    if(sum1%k==0){
        printf("%d\n",n);//periptosi pou einai ola mazi
    }else{
//    printf("maxx=%d\n",maxx
    for(i=1;i<=n;i++){
        for(j=0;j<=n-i;j++)
            for(b=j;b<i-j;b++)
            printf("i=%d,j=%d,b=%d\n",i,j,b);



    }


    }

//printf("sum=%d\n",sum);
return 0;}
/*
20 77
85 17 57 19 58 66 18 5 51 46 82 73 37 43 19 29 52 66 19 65
->9

7 7
3 5 1 6 2 14 1
->5

i skepsi pou ithela na kanw itan na dimiourgiso kai na elegxo me afton ton tropo tous arithmous...
better luck next time...
3  8  9 ....
5  6  12
1  7  9
6  8  22
2  14 17
14 15
1




*/
