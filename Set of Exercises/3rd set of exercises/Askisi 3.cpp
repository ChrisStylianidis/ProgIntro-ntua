//Askisi 3.cpp
#include<iostream>
#include<cmath>
using namespace std;
void change(int&a,int&b){
int temp;
temp=a;
a=b;
b=temp;}
int mkd(int a,int b){
    int z=a;
    if(a>b)
        z=b;
    while(a%z!=0 || b%z!=0)
        z--;
    return z;}
int ekp(int a,int b){
    int z=a;
    if(a<b)
        z=b;
    while(z%a!=0 || z%b!=0)
        z++;
    return z;}
void aplop(int&a,int&b){
    int temp;
    temp=a;
    a/=mkd(a,b);
    b/=mkd(temp,b);}

bool athrismata(int&a,int&b,int&c,int&d,char&pr){
int ab=1,cd=1;
if(a<0){
    ab*=-1;
    a=abs(a);}
if(b<0){
    ab*=-1;
    b=abs(b);}
if(c<0){
    cd*=-1;
    c=abs(c);}
if(d<0){
    cd*=-1;
    d=abs(d);}
    if(a==0&&cd<0){
        if(pr=='-')
            return false;
        return true;}
    if(c==0&&ab<0){
        //if(pr=='+')
            return true;
       // return false;
       }


//    cout<<"ab="<<ab<<" cd="<<cd<<" pr="<<pr<<endl;
if((ab>0&&cd<0&&pr=='-')||(ab>0&&cd>0&&pr=='+'))// + +
    pr='+';
else if((ab<0&&cd<0&&pr=='-')||(ab<0&&cd>0&&pr=='+')){// - +
    change(a,c);
    change(b,d);
    pr='-';}
else if((ab>0&&cd>0&&pr=='-')||(ab>0&&cd<0&&pr=='+')){// + -
    pr='-';
}
else if((ab<0&&cd>0&&pr=='-')||(ab<0&&cd<0&&pr=='+')){// - -
    pr='+';
    return true;
}
return false;}
void ginomena(int&a,int&b,int&c,int&d,bool&pr){
int p=1;
if(a<0){
    p*=-1;
    a=abs(a);}
if(b<0){
    p*=-1;
    b=abs(b);}
if(c<0){
    p*=-1;
    c=abs(c);}
if(d<0){
    p*=-1;
    d=abs(d);}
if(p<0)
    pr=true;}
int main(){
ifstream cin ("runcase3.txt");
ofstream cout ("Checkmeplease.txt");
    char symb;
    int i,times;
    int a,b,c,d;//input klasmata
    int p,x,y;
    float a1,p1;
    bool arnitiko=false;
    cin>>times;
    for(i=0;i<times;i++){
        cin>>symb>>a>>b>>c>>d;//symb='+';
        if((b==0||d==0)||(symb=='/'&&c==0))
            cout<<"error"<<endl;
        else if((symb=='+'||symb=='-')&&(c==0||a==0)){
//            cout<<"mpika"<<endl;
            if(a==0){
                b=0;
                arnitiko=athrismata(a,b,c,d,symb);
                x=c;
                y=d;
                p=x/y;
                x%=y;
                if(x==0)
                    y=1;
                else
                    aplop(x,y);
            }
            else if(c==0){
                d=0;
                arnitiko=athrismata(a,b,c,d,symb);
                x=a;
                y=b;
                p=x/y;
                x%=y;
                if(x==0)
                    y=1;
                else
                    aplop(x,y);
                }
            if(p<0){
                p=abs(p);
                arnitiko=true;}

//                cout<<p<<" "<<x<<" "<<y<<endl;
            if(arnitiko)
                cout<<"-"<<p<<" "<<x<<" "<<y<<endl;
            else
                cout<<p<<" "<<x<<" "<<y<<endl;
        }
        else{
        if(symb!='/'&&symb!='*'){
            arnitiko=athrismata(a,b,c,d,symb);
            a1=(a/float(b))*1.0;
            p1=(c/float(d))*1.0;
//            cout<<"The value= "<<a1<<" "<<p1<<endl;
            if(a1<p1&&symb=='-')arnitiko=true;}
//            cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" symb="<<symb<<" arnitiko="<<arnitiko<<endl;
            switch(symb){
            case '+':
            aplop(a,b);
            aplop(c,d);
                x=a*(ekp(b,d)/b)+c*(ekp(b,d)/d);
                y=ekp(b,d);
                p=x/y;
                x%=y;
                break;
            case '-':
            aplop(a,b);
            aplop(c,d);
                x=a*(ekp(b,d)/b)-c*(ekp(b,d)/d);
                y=ekp(b,d);
                p=x/y;
                x%=y;
                if(x==0)
                    y=1;
                break;
            case '/':
                change(c,d);
            case '*':
                ginomena(a,b,c,d,arnitiko);
                x=a*c;
                y=b*d;
                p=x/y;
                x%=y;
                if(x%y==0)
                    {
                    x=0;
                    y=1;
                }
                else
                break;
            default:break;}
        x=abs(x);
        y=abs(y);
        if(p<0)
            arnitiko=true;
        p=abs(p);
        if(x!=0&&y!=0)
            aplop(x,y);

//        cout<<"--------->";
        if((arnitiko)){//(p==0&&x!=0)||
            cout<<"-";
            cout<<p<<" "<<x<<" "<<y<<endl;}
        else
            cout<<p<<" "<<x<<" "<<y<<endl;

        }}
return 0;}
