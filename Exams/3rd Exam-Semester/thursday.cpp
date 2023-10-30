//thursday.cpp
#include<cstdio>
int main(){
        int a[100][100];
        int i, j,r,c,sum,position,maxx=0;
        scanf("%d %d",&r,&c);
        for (i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);
        for (i=0;i<c;i++){
            sum=0;
            for(j=0;j<r;j++)
                  sum+=a[j][i];
            if(sum>=maxx){
                maxx=sum;
                position=i+1;}}
        printf("%d %d\n",position,maxx);
return 0;}
