//qposneg.cpp
#include<cstdio>

class queue{
public:
       queue   ();
  bool empty   ();
  void enqueue (int x);
  int  dequeue ();
  int  peek    ();
  int  nextpos (int x);
  int  nextneg (int x);
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
int n;
node *p=f;
while((p->next)->info<0&&p!=nullptr)
    p=p->next;
node *del=p->next;
if(p!=nullptr)
    n=(p->next)->info;
else
    n=0;
(p->next)=((p->next)->next);
delete del;
return n;}

int queue::nextneg(int x){
int n;
node *p=f;
while((p->next)->info>0&&p!=nullptr)
    p=p->next;
node *del=p->next;
if(p!=nullptr)
    n=(p->next)->info;
else
    n=0;
(p->next)=((p->next)->next);
delete del;
return n;}

int main(){
    queue q;
    bool flag=true;
    int i,pos=0,neg=0,b,sound,holdpos,holdneg,hold;
    while(scanf("%d",&b)==1){
        q.enqueue(b);
        if(b>0)
            pos++;
        else
            neg++;
        }
    while(!q.empty()){
    if(q.peek()>0)
    printf("%d ",q.nextneg(q.peek()));
    else
    printf("%d ",q.nextpos(q.peek()));

    q.dequeue();
    }
if(neg==pos&&flag)
    printf("yes\n");
else
    printf("no\n");

return 0;}
