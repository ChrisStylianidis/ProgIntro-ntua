//bstree.cpp

#include<cstdio>
class bstree {
public:
       bstree    ();
  int  height    ();
  void insert    (int x);
  int  search    (int x);
  int  min       ();
  int  max       ();
  void inorder   ();
  void preorder  ();
  void postorder ();
private:
    struct node{
    int info;
    node *left,*right;};
    node *tree;
    int ipsos;

//
};
bstree::bstree(){
ipsos=0;
tree=nullptr;
}
/*
void bstree::insert(int x){
if(tree==nullptr){
    tree->left=nullptr;
    tree->right=nullptr;
    tree->info=x;
    return;
}
node *t=tree;
node *n=new node;
n->right=nullptr;
n->left=nullptr;
n->info=x;
    while(t!=nullptr){
        if(t->info<x){
            if(t->right==nullptr)
                    t->right=n;
            t=t->right;}
        else{
            if(t->left==nullptr)
                t->left=n;
            t=t->left;}}}
*/
void bstree::insert(int key, node *leaf)
{
  if(key< leaf->key_value)
  {
    if(leaf->left!=NULL)
     insert(key, leaf->left);
    else
    {
      leaf->left=new node;
      leaf->left->key_value=key;
      leaf->left->left=NULL;    //Sets the left child of the child node to null
      leaf->left->right=NULL;   //Sets the right child of the child node to null
    }
  }
  else if(key>=leaf->key_value)
  {
    if(leaf->right!=NULL)
      insert(key, leaf->right);
    else
    {
      leaf->right=new node;
      leaf->right->key_value=key;
      leaf->right->left=NULL;  //Sets the left child of the child node to null
      leaf->right->right=NULL; //Sets the right child of the child node to null
    }
  }
}


int bstree::search(int key){
node *t=tree;
if(t==nullptr) return 0;
if(t->info==key) return 1;
int position=1;
    while(t->info!=key && (t->right!=nullptr || t->left!=nullptr)){
        position++;
        if(t->info<key)
        t=t->right;
        else if(t->info>key)
        t=t->left;
    }
    if(t->info==key)
        return position;
    else return 0;

}

int foo(tree x){
if(!x) return 0;
else if(!x->left)
    if(!x->right) return 0;
    else return x->info+foo(x->right);
else return foo(x->left)+foo(x->right);

}
int main(){
int n,k;
bstree dentro;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&k);
    dentro.insert(k);
    }
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&k);
    printf("%d ",dentro.search(k));
    }
    printf("\n");

return 0;}
