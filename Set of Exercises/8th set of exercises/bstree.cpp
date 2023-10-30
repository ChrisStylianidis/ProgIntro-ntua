//bstreelast.cpp
#include<cstdio>
int maxe(int a,int b){
if(a>b) return a;
return b;
}
    struct node{
    int info;
    node *left,*right;};
class bstree{
public:
       bstree    ();
  int  height    ();
  void insert    (int x);
  int  search    (int x);
  int  min       ();
  int  max       ();
  void inorder   ();
  void preorder  ();//
  void postorder ();//
private:
    node *root;
};
bstree::bstree(){
root=nullptr;
}
node *insert_aux(node *t,int key);
void inorder_aux(node *t);
void bstree::insert(int key){
   root = insert_aux(root,key);
}
void bstree::inorder(){
//printf("Tree contents:");
inorder_aux(root);
printf("end\n");
}
node *insert_aux(node *t, int key){
if(t==nullptr){
    node *p=new node;
    p->info=key;
    p->left=p->right=nullptr;
    return p;
}
if(t->info>key) t->left=insert_aux(t->left,key);
else if(t->info<key) t->right=insert_aux(t->right,key);
return t;
}
int bstree::search(int key){
node *t=root;
if(t==nullptr) return 0;
if(t->info==key) return 1;
int position=1;
    while(t->info!=key && t!=nullptr){
        position++;
        if(t->info<key){
                if(t->right==nullptr) return 0;
        t=t->right;}
        else { if(t->left==nullptr) return 0;
            t=t->left;}
    }
    if(t==nullptr) return 0;
    if(t->info==key)
        return position;

}
void inorder_aux(node *t){
if(t!=nullptr){
    inorder_aux(t->left);
    printf("%d ",t->info);
    inorder_aux(t->right);

}
}
void preorder_aux(node *t);
void bstree::preorder(){
preorder_aux(root);
printf("end\n");}
void preorder_aux(node *t){
if(t!=nullptr){
    printf("%d ",t->info);
    preorder_aux(t->left);
    preorder_aux(t->right);

}
}
void postorder_aux(node *t);
void bstree::postorder(){
postorder_aux(root);
printf("end\n");}
void postorder_aux(node *t){
if(t!=nullptr){
    postorder_aux(t->left);
    postorder_aux(t->right);
    printf("%d ",t->info);
}
}
int height_aux(node *t);
int bstree::height(){
    node *t=root;
return height_aux(t);
}
int height_aux(node *t){
if(t==nullptr) return 0;
return 1+maxe(height_aux(t->left),height_aux(t->right));
}
int bstree::min(){
node *p=root;
while(p->left!=nullptr )
    p=p->left;
return p->info;
}
int bstree::max(){
node *p=root;
while( p->right!=nullptr)
    p=p->right;
return p->info;
}

int foo(node *x){
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
    printf("%d\n",dentro.height());
    printf("%d %d\n",dentro.min(),dentro.max());
scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%d",&k);
    printf("%d",dentro.search(k));
    if(i!=n-1)
        printf(" ");
    }
    printf("\n");
    dentro.inorder();
    dentro.preorder();
    dentro.postorder();
}
