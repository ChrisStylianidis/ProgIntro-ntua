//palin.cpp
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
bool checkme(string a){
    int e,m,i;
    e=a.size()-1;
    m=a.size()/2;
    if(a.size()%2==0)
        m+=1;
    for(i=0;i<m;i++){
        if(a[e]!=a[i])
            return false;
        e--;
    }
return true;
}
int main(){
    string a;
    int n,c=0;
    cin>>n;
    getline(cin,a);
    for(int i=0; i<n;i++){
        getline(cin,a);
        if(a.size()==0)
            cout<<"empty"<<endl;
        else if(a.size()>20)
            cout<<"error"<<endl;
        else{
            if(checkme(a)){
                cout<<"yes"<<endl;
                c+=1;
            }
            else
                cout<<"no"<<endl;
            }
    }
    cout<<fixed<<setprecision(3)<<(c*100.0)/n<<endl;
return 0;}
