//wednesday2.0.cpp
#include<iostream>
using namespace std;
int main(){
        int a[100][100];
        int i, j,r,pl=0,c,sum[100],position=0,minn;
         cin>>r>>c;
        for (i=0;i<r;i++)
            for(j=0;j<c;j++)
                cin>>a[i][j];
        for (i=0;i<r;i++){
            pl=0;
            for(j=0;j<c;j++)
                  pl+=a[i][j];
            sum[i]=pl;}
        minn=sum[0];
        for(i=1;i<r;i++){
        if(minn>=sum[i]){
            minn=sum[i];
            position=i+1;
        }}
        cout<<position<<" "<<minn<<endl;

return 0;}
