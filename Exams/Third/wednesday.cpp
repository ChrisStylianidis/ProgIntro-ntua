//wednesday.cpp
#include<cstdio>
int main(){
        int a[100][100];
        int i, j,r,c,sum,position,minn=100000;
        scanf("%d %d",&r,&c);
        for (i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);

        for (i=0;i<r;i++){
            sum=0;
            for(j=0;j<c;j++)
                  sum+=a[i][j];
            if(sum<=minn){
                minn=sum;
                position=i+1;}}
        printf("%d %d\n",position,minn);
return 0;}
