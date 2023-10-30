//lowsum.cpp
#include<cstdio>
int apoliti(int a){
    if(a>=0)
        return a;
    return -a;}
int main(){
int n;
int i,right,pright,left,pleft;//pleft einai to position left
bool flag=true,pos=true,checkme=true;

scanf("%d",&n);//diavazo to n
int a[n];

for(i=0;i<n;i++){
    scanf("%d",&a[i]);//diavazo tous arithmous
    if(a[i]>0&&flag){//exo flag etsi oste na mpo
        pright=i;//mono tin proti fora
        flag=false;//kai na kratiso mono ton proto thetiko
    }
    if(a[i]<0){
        pleft=i;
        pos=false;
        }
    }
int eq,sum,minn=1000000;
if(flag){//an mpei sto if simenei oti einai oloi negative
    checkme=false;
    minn=a[n-1]+a[n-2];
    }
if(pos){
    checkme=false;
    minn=a[0]+a[1];}

//afti i periptosi einai gia tis protes times, dio thetika kai dio arnitika mono, tin periptosi thetiko arnitiko tin kalipto

if(!flag){
    minn=a[pright]+a[pright+1];
    if(apoliti(minn)>apoliti(a[pleft]+a[pleft-1])){
        minn=a[pleft]+a[pleft-1];
    }
}

if(checkme){//vazo mia bool checkme etsi oste an einai oloi thetikoi i arnitikoi na min mpei mesa stin diadikasia afou exo idi ipologisei ta min
do{
    right=a[pright];
    left=a[pleft];
    eq=right+left;

    if(apoliti(eq)<apoliti(minn))//vazo apoliti epidi thelw na einai konta sto 0
        minn=eq;//episis tin onomasa apoliti epidi ston grader den dexotan to abs gia kapoio logo.

    if(eq<0)
        pright++;//an einai arnitiko to athrisma tote vazo ton epomeno megalitero thetiko

    if(eq>0)
        pleft--;//antistixa gia ta arnitika

}while(pleft>=0&&pright<n&&minn!=0);}//end of if checkme
printf("%d\n",minn);

return 0;}
