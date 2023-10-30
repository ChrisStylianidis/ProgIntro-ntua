//oddeven.cpp
#include<cstdio>
#define nmax 1000000
int aabs(int a){
if(a>=0)
    return a;
return -a;
}
int main(){
    int n,i,counter=0,maxx=0;
    int odd=0,even=0;
int *a=new int[nmax];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==1)
            odd++;
        else
            even++;
        if(aabs(even-odd)>=2){
            counter=0;
            even=0;
            odd=0;
            if(a[i]%2==1)
                odd++;
            else
                even++;
            }
        counter++;
        if(counter>maxx)
            maxx=counter;

    printf("odd=%d even=%d ",odd,even);
    if(i%2==0)
        printf("\n");
    }
    maxx--;
printf("%d\n",maxx);

return 0;}

//20
//23 78 1 97 28 73 90 9 75 95 37 38 3 45 51 54 21 24 8 79
