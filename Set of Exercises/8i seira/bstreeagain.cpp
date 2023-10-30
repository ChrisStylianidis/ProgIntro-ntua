//bstreeagain.cpp
#include<cstdio>
struct node{
int info;
node *left,*right;};
typedef node *tree;

void preorder(tree t){
if(t!=nullptr){
    printf("%d",t->info);
    preorder(t->left);
    preorder(t->right);
}
}
int height(tree t){
if(t==nullptr) return 0;
return 1+max(height(t->left),height(t->right));
}
node *search(node *t,int key){
if(t==nullptr)
    return nullptr;
if(t->info==key) return t;
    if(t->info>key) return search(t->left,key);
else return search(t->right,key);}

node *insert(node *t, int key){
if(t==nullptr){
    node *p=new node;
    p->info=key;
    p->left=p->right=nullptr
    return p;
}
if(t->info>key) t->left=insert(t->left,key);
else if(t->info<key) t->right=insert(t->right,key);
return t;
}
int main(){


}
