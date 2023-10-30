//list2.0.cpp
#include<iostream>
class list {
public:
       list   ();//
  bool empty  ();//
  int  size   ();//
  void add    (int k, int x);//
  int  get    (int k);
  void remove (int k);
  void show   ();//
private:
    struct node{
    int info;
    node *next;
    };
    node *f;
    int s;
  };
list::list(){
  f=nullptr;
  s=0;}
bool list::empty(){
  return f==nullptr;}
int list::size(){
  return s;}

void list::add(int k, int x){
    s++;
    node *n= new node;
    n->info=x;
    n->next=nullptr;
    if(k==1){
    n->next=f;
    f=n;}
    else{
    node *p=f,*temp;
    for(int i=0;i<k-2;i++)
        p=p->next;
    temp=p->next;
    p->next=n;
    n->next=temp;}
  }
void list::remove(int k){
s--;

}

void list::show(){
    node *p=f;
while(p!=nullptr){
    printf("%d ",p->info);
    p=p->next;}
    printf("\n");
    delete p;}
using namespace std;
int main(){
    int n,m,k,x;
    list l;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k>>x;
        l.add(k,x);}
    l.show();

return 0;}

/*

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>k;
        l.remove(k);}
    cin>>k;
    cout<<get(k)<<" "<<l.size()<<endl;
    */
