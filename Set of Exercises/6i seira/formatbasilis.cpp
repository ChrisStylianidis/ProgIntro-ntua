#include<iostream>
#include<string>
using namespace std;
int main(){
string leksi,maintext[10000],lexi[10000];
int i=0;

leksi="";
int c=0;
while(!cin.eof()){
getline(cin,maintext[i]);
for(int j=0;j<=maintext[i].size();j++){
    if(maintext[i][j]==' '||j==maintext[i].size()){
    lexi[c]=leksi;
    c++;
    leksi="";}
    else{
        leksi+=maintext[i][j];}
}
i++;
}
for(i=0;i<c;i++)
    cout<<lexi[i]<<" ";



return 0;}
/*

c=0;
while(!cin.eof()){
getline(cin,maintext[i]);
for(int j=0;j<maintext[i].size();j++){
    if(maintext[i][j]==" "){
    lexi[c]=leksi;
    c++;
    leksi="";}
    else{
        leksi+=maintext[i][j];}
}
i++;
}
for(i=0;i<c;i++)
    cout<<lexi[i]<<" ";


*/

/*
while(!cin.eof()){
getline(cin,maintext[i]);
i++;

}
for(int j=0;j<i;j++){
    lexi[j]=maintext[j];
    cout<<lexi[j]<<" ";}
*/
