//askisi15.cpp
#include<cstdio>
#define sizee 1000
bool letter(char a){
    return (a>='a'&&a<='z')||(a>='A'&&a<='Z');
    }
int main(){
    int b,j,i,word=0,gramma=0,sum=0;

FILE *fin,*fout;
fin=fopen("in.txt","rt");
fout=fopen("out.txt","wt");
while(!feof(fin)){
    unsigned char buffer[sizee],write[sizee];
    unsigned int countr;
    countr=fread(buffer,1,sizee,fin);
    i=0;
    b=0;
    while(i<sizee){
    if(buffer[i]=='\n')
        i++;
    if(buffer[i]!=' '){
        gramma++;
    j=i;
    while(buffer[j]!=' '&&j<sizee){
        j++;
    }


    i++;}}


    fwrite(write,1,b,fout);
}
fclose(fin);
fclose(fout);

return 0;}
