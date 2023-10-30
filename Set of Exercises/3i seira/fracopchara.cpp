//fracopchara.cpp
#include<fstream>
using namespace std;

int megistos (int a,int b){
 while (a>0 && b>0)
   if (a>b)
       a=a%b;
   else b=b%a;
 return a+b;
}

int main(){
    ifstream cin ("runcase3.txt");ofstream cout ("Checkcharas.txt");
int N;
cin>>N;
char s;
int a1,a2,p1,p2,ap1,ap2,mkd,ak;
bool boolian=false;

for(int i=0;i<N;i++){
 cin>>s>>a1>>p1>>a2>>p2;
 if (p1==0 || p2==0  ||  s=='/' && a2==0)
    cout<<"error"<<endl;
 else {
      switch (s){
      case '+': ap1=a1*p2 + a2*p1 ;
                ap2=p1*p2;
                break;
      case '-': ap1=a1*p2 - a2*p1 ;
                ap2=p1*p2;
                break;
      case '*': ap1=a1*a2;
                ap2=p1*p2;
                break;
      case '/': ap1=a1*p2;
                ap2=p1*a2;
                break;
                }

 if ((ap1<0&&ap2>0)||(ap1>0&&ap2<0)) boolian=true;//look at this

 ap1=abs(ap1); ap2=abs(ap2);
 mkd=megistos(ap1,ap2);

 ap1=ap1/mkd;  ap2=ap2/mkd;
 ak=ap1/ap2;   ap1=ap1-(ak*ap2);

 if(boolian==true)
 cout<<"-";
 cout<<ak<<" "<<ap1<<" "<<ap2<<endl;
 boolian=false;
 }
}
}
