//opcheck.cpp
#include<iostream>
#define n 5
using namespace std;
int main(){
    int i,a,b,c;
    char sym, iso;
    bool boolean;
    for(i=0;i<n;i++){
        cin>>a>>sym>>b>>iso>>c;
        boolean=false;
//        cout<<a<<" "<<sym<<" "<<b<<" "<<iso<<" "<<c<<endl;
        switch(sym){
            case '+': if(a+b==c) boolean=true; break;
            case '-': if(a-b==c) boolean=true; break;
            case '*': if(a*b==c) boolean=true; break;
            case '/': if(a/b==c) boolean=true; break;
            case '%': if(a%b==c) boolean=true; break;}
        if(boolean)
            cout<<"correct"<<endl;
        else
            cout<<"wrong"<<endl;
    }
return 0;}
