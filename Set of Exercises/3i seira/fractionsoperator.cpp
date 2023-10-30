//fractionsoperator.cpp
#include<iostream>
using namespace std;
void change(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;}
int mkd(int a, int b){
    if (a == 0)
        return b;
    return mkd(b%a, a);}
void aplop(int &d, int &n) {//aplopiisi klasmatos
    int cf=mkd(n,d);
    d/=cf;
    n/=cf;}
int main(){
    int times,a,b,c,d,x,y,p;
    char oper;
    bool arnitiko;
    cin>>times;
    for(int i=0;i<times;i++){
    cin>>oper>>a>>b>>c>>d;
    if((d==0||b==0)||(oper=='/'&&c==0))
        cout<<"error"<<endl;
    else{
        arnitiko=false;
        aplop(a,b);aplop(c,d);//aplopoiw kai ta dio klasmata
        switch(oper){
            case '-':
                y = mkd(b,d);
                y = (b*d) / y;
                x = (a)*(y/b) - (c)*(y/d);
                aplop(x,y);
                p=abs(x)/abs(y);
                if(y<0||x<0)
                    arnitiko=true;
                x%=y;
                break;
            case '+':
                y = mkd(b,d);
                y = (b*d) / y;
                x = (a)*(y/b) + (c)*(y/d);
                aplop(x,y);
                p=abs(x)/abs(y);
                if(y<0||x<0)
                    arnitiko=true;
                x%=y;
                break;
            case '/':
                change(c,d); //klasma antistrameno kai kano pollaplasiasmo
            case '*':
                x=a*c;
                y=b*d;
                p=abs(x)/abs(y);
                if((y<0&&x>0)||(y>0&&x<0))
                    arnitiko=true;
                aplop(x,y);
                x%=y;
                break;}
        y=abs(y);  x=abs(x);
        if(arnitiko&&p>=0)
            cout<<"-";
    cout<<p<<" "<<x<<" "<<y<<endl;
    }}//end of for
return 0;}
