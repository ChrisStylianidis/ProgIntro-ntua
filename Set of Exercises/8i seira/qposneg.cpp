//qposneg.cpp
#include<cstdio>
class queue{
public:
       queue   ();
  bool empty   ();
  void enqueue (int x);
  int  dequeue ();
  int  peek    ();
private:
    struct node{
    int info;
    node *next;};
    node *f,*rear;
};
queue::queue(){
f=rear=nullptr;
}
bool queue::empty(){
    return f==nullptr;
}
void queue::enqueue(int x){
    node *n= new node;//prosoxi
    n->info=x;
    n->next=nullptr;
    if(f==nullptr)
        f=n;
    else
        rear->next=n;
    rear=n;
}
int queue::dequeue(){
    node *n;
    n=f;
    int ar=f->info;
    if(f==rear)
        rear=nullptr;
    f=f->next;
    delete n;
    return ar;
}
int queue::peek(){
    int num=f->info;
return num;
}
int main(){
    queue pos,neg;
    bool flag=true;
    int i,positive=0,negative=0,b,holda,holdb;
    while(scanf("%d",&b)==1){
        if(b>0){
            pos.enqueue(b);
            positive++;}
        else{
            neg.enqueue(b);
            negative++;}
        }
if(negative!=positive)
    flag=false;


while(!pos.empty() && flag ){
    holda=neg.dequeue();
    holdb=pos.dequeue();
if(holda!=-holdb)
    flag=false;
}

if(flag)
    printf("yes\n");
else
    printf("no\n");

return 0;}
