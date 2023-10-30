#include<iostream>
#include<string>
using namespace std;
bool gramma(char a){
return (a>='a' &&a<='z') || (a>='A' && a<='Z');}
void ftiaksimo(string &a){
    string b="";
    int availablespaces=0;
    for(int i=0;i<a.size()-1;i++){
        b+=a[i];//o logos aftou tou for einai gia na ksefortotho to telefteo keno pou exei to a
    if(a[i]==' '){
        availablespaces++;}
    }
    a=b;
    b="";
    int spaces=60-a.size(),c=0,i,thesi,fores=1;
    bool keno=true;
    i=a.size()-1;
    while(keno){
        if(i==0){
            fores++;
            i=a.size()-1;}
        if(a[i]==' ')
            c++;
        if(c==spaces){
            thesi=i;
            keno=false;
        }
        i--;}
    keno=false;
        c=0;
    for(i=0;i<a.size();i++){
        if(i==thesi)
            keno=true;
        if(keno&&a[i]==' '){
                b+=' ';
                }
        if(a[i]==' ')
            for(int z=0;z<fores-1;z++)
                b+=' ';
        b+=a[i];}
    a=b;
}
int main(){
string arxiko="",lexi[50000],kathegrammi,temp="";
int i=0,c=0,sum=0;

bool vrikakeno=true;
while(!cin.eof()){//once  upon
    getline(cin,kathegrammi);
    arxiko+=kathegrammi+" ";}
for(i=0;i<arxiko.size();i++){
    if(arxiko[i]==' '&&vrikakeno){
        vrikakeno=false;
        lexi[c]=temp;
        c++;
        temp="";
    }
    if(arxiko[i]!=' '){
        vrikakeno=true;
        temp+=arxiko[i];
    }
}
for(i=0;i<c;i++){
    sum+=lexi[i].size();
    if(sum<=60)
    temp+=lexi[i];
    if(sum==60){
        cout<<temp<<endl;
        sum=-1;
        temp="";}
    else if(sum>60){
        ftiaksimo(temp);
        cout<<temp<<endl;
        temp=lexi[i];
       sum=lexi[i].size();
    }
 sum++;
 if(sum!=0)//tha valoume bool
 temp+=" ";
}
if(sum==temp.size())
    for(i=0;i<temp.size()-1;i++)
    cout<<temp[i];
cout<<endl;
return 0;}
