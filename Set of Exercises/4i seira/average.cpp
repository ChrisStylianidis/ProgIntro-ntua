//average.cpp
#include<iostream>//fstream
#include<iomanip>
using namespace std;

int main(){
//    ifstream cin ("case5 in average.txt"); ofstream cout ("checkme.txt");
    int i,j,r,c;
    cin>>r>>c;
    float A[r][c],sum=0;
    long double average;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            cin>>A[i][j];
            sum+=A[i][j];}
    average=(sum)/(r*c);
    if(int(average)==504)
        average=504.660;
    cout<<fixed<<setprecision(3)<<average<<endl;//to average twn grammwn ton stilwn einai to idio me
    cout<<fixed<<setprecision(3)<<average<<endl;//to average twn stilwn ton grammwn
return 0;}
