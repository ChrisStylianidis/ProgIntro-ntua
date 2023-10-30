#include<cstdio>
int main(){
int n,x,y,i,maxx=0;
bool flag=true;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
x=0;
y=n-1;
int suma=a[x],sumd=a[y];
while(x!=y){
//    cout<<suma<<" "<<sumd<<endl;
    if(suma>sumd){
        y--;
        sumd+=a[y];}
    else if(suma<sumd){
        x++;
        suma+=a[x];
    }
    else if(suma==sumd){
        x++;
        if(maxx<suma)
            maxx=suma;
        suma+=a[x];
    }
}
        printf("%d\n",maxx);



return 0;}
