//qposnegwrong.cpp
#include<cstdio>
int nextpos(int a[],int s,int n){
    while(a[s]<=0&&s<n)
        s++;
    if(s==n)
        return 0;
    int b=a[s];
    a[s]=0;
    return b;

}

int nextneg(int a[],int s,int n){
    while(a[s]>=0&&s<n){
        s++;}
    if(s==n)
        return 0;
    int b=a[s];
    a[s]=0;
    return b;

}

int main(){
int i=0,b,pos=0,neg=0,n=0;
int *a=new int[10000000];
bool flag=true;
while(scanf("%d",&b)==1){
    a[n]=b;
    n++;
    if(b>0) pos++;
    else neg++;
}
int nepo,nene;
for(i=0;i<n;i++){
    if(a[i]==0) continue;
    nepo=nextpos(a,i,n);
    nene=nextneg(a,i,n);
//    printf("nextpos=%d nextneg=%d\n",nepo,nene);

    if(nepo!=-nene){
        flag=false;
        break;
    }
}
for(i=0;i<n;i++)
    if(a[i]!=0){
        flag=false;
        break;}
if(neg==pos&&flag)
    printf("yes\n");
else
    printf("no\n");

return 0;}
