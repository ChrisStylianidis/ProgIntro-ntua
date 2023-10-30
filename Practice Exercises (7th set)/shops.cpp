//shops.cpp
#include<cstdio>
#define nmax 2000000
void fige(int A[],int&N,int K){
    int i,j,temp;
    for(i=0; i<N; i++){
            temp=A[i];
            j=i-1;
            while(j>=0&&A[j]==0){
                A[j+1]=A[j];
                j--;}
            A[j+1]=temp;}
    N-=K;}
int main(){
int i,n,k,money1=0,money2=0,maxx2=0,maxx=0,pos=0;//position einai 1 afou tin proti fora i kaliteri thesi einai sto deytero kouti
int *a=new int [nmax];
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(i<k)
        money1+=a[i];//ta prota k
}
maxx=money1;
for(i=k;i<n;i++){
    money1-=a[i-k];
    money1+=a[i];
    if(money1>=maxx){
        maxx=money1;
        pos=i-k+1;

    }
}

//midenizo tis megistes theseis
for(i=pos;i<pos+k;i++)
    a[i]=0;
fige(a,n,k);//fevgo ta midenika


for(i=0;i<k;i++)
    money2+=a[i];

maxx2=money2;
for(i=k;i<n;i++){
    money2-=a[i-k];
    money2+=a[i];
    if(money2>=maxx2){
        maxx2=money2;
//        printf("my pos=%d, i-k+1=%d-%d+1\n",pos,i,k);

    }
}

//printf("the first position is: %d and the money are: %d\n",pos,maxx);
//printf("the first %d money of the second store are: %d\n",k,money2);
//printf("maxx=%d maxx2=%d\n",maxx,maxx2);
printf("%d\n",maxx+maxx2);

return 0;}
/*
10 3
2 4 15 12 10 1 1 20 4 10
->71

10 3
1 5 20 20 20 15 10 1 1 1
->90

10 4
30 5 20 20 20 15 10 1 1 1
->121
*/
