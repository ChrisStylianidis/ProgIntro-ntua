//minmax.cpp
#include<iostream>
using namespace std;

int main(){
    int i,j,r,c;
    cin>>r>>c;
    int A[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>A[i][j];
    int minr,maxc;
    int maxC[c],minR[r];
    for(i=0;i<r;i++){
        minr=A[i][0];
        for(j=1;j<c;j++){
            if(minr>A[i][j])
                minr=A[i][j];
        }
        minR[i]=minr;
    }

    for(j=0;j<c;j++){
        maxc=A[0][j];
        for(i=1;i<r;i++){
            if(maxc<A[i][j])
                maxc=A[i][j];
        }
        maxC[j]=maxc;
    }
    maxc=maxC[0];//sigxistikos o tropos onomasias mou
    for(i=0;i<c;i++)//elpizo na min elegksei kapios tin ergasia afti
        if(maxC[i]<maxc)//allios tha xathei
            maxc=maxC[i];//edw se afto to for psaxno ton MIKROTERO
    cout<<maxc<<endl;
    minr=minR[0];
    for(i=0;i<r;i++)
        if(minR[i]>minr)
            minr=minR[i];
    cout<<minr<<endl;

return 0;}
