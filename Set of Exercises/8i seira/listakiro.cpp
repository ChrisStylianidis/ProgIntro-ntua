#include <iostream>
#include <cstdio>
using namespace std;

class list {
public:
       list   ();
  bool empty  ();
  int  size   ();
  void add    (int k, int x);
  int  get    (int k);
  void remove (int k);
  void show   ();
private:
    struct node {
 int info;
 node *next;

 };
 node *head;
int size1;

};

list::list(){
head=nullptr;
size1=0;}

bool list::empty(){
    return head==nullptr;}

void list::add (int k, int x){
    node *n =head, *p,*new1;
    if(k==1){
            p=new node;
        p->info=x;
        p->next=n;
        head=p;
    }
else{
    for(int i=1; i<k-1; i++)
    {n=n->next;}
 p = new node;                   //einai swsto
 p->info=x;
 new1=n->next;
 n->next=p;
 p->next=new1;
 }
size1++;}


int list::get(int K) {

    node *n=head;
for(int i=2; i<=K; i++)     //fainetai swsto
        {head=head->next;}
 return head->info;

}

void list::remove(int p)
{node *del=head;
if(p==1){
    head=head->next;
    delete del;

}
else{
 for(int i=1; i<p-1; i++)
 {del= del->next;}
 node *q;
 q=del->next;
 p=q->info;
 del->next=q->next;
 delete q;}
size1--;
}

int list::size(){

return size1; }

void list::show(){
node *p=head;
while(p!=nullptr){
    printf("%d " ,p->info);
    p=p->next;}
    printf("\n");
    delete p;}


int main() {


int N,M,i,j,k,x,p,K;

list l;

cin>>N;
for(i=1; i<=N; i++){
    cin>>k>>x;
    l.add(k,x);
}
l.show();
cin>>M;
for(j=0; j<M; j++){
        cin>>p;
    l.remove(p);
}
cin>>K;
cout<<l.size()<<" "<<l.get(K);


}
/*
10
1 10
1 9
1 8
1 7
1 6
1 5
1 4
1 3
1 2
1 1
9
1
1
1
1
1
1
1
1
1
1
*/
