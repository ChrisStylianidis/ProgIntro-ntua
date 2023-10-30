//digits.cpp
#include<iostream>
int main(){
    int k,i,j,n,b,l,psifia[10000],dik=0,ortha[10000],co;//n einai o arithmos, b i vasi kai l to psifio apo aristera deksia
     //dik einai o diktis gia ton pinaka psifia
     //co einai diktis tou ortha
    std::cin>>k;
    for(i=0;i<k;i++){
        std::cin>>n>>b>>l;
        if (n==0)
            std::cout<<"0"<<std::endl;
        else{
        while(n>0){
            psifia[dik]=n%b;
            dik++;
            n/=b;
        }


    for(j=dik-1,co=0;j>=0;j--,co++){
        ortha[co]=psifia[j];
    }
        std::cout<<ortha[l-1]<<std::endl;
        }
    }




return 0;}
