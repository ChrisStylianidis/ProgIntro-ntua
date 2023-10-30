//tetart.cpp
// IF YOU TOUCH ANYTHING OUTSIDE THE LINES MARKED WITH "(snip)"
// THEN YOU'D BETTER KNOW WHAT YOU'RE DOING!  YOUR CODE MAY NOT
// COMPILE.  YOU HAVE BEEN WARNED!

#ifndef CONTEST
#include <iostream>

using namespace std;

struct node {
  int data;
  node *next;
};

typedef node *list;

#endif

// YOUR SOLUTION GOES HERE -- YOU DON'T NEED TO ERASE THE REST
// -----------------------------------------------------------
// MAKE SURE THAT YOUR SUBMISSION COMPILES, OTHERWISE YOU WILL
// GET ZERO POINTS TODAY AND THAT WILL BE A PITY!
// ------------------------(snip)-----------------------------
int sum_and_remove(list &l, int start, int length) {
    int i=0,sum=0;
    if(start==1){
        for(i=0;i<length;i++){
            sum+=l->data;
            l=l->next;}
        return sum;
    }
    node *s=l;
    while(i<start-2){
        s=s->next;
        i++;}
    node *p=s->next;
    for(int j=0;j<length;j++){
        node *del=p;
        sum+=del->data;
        p=p->next;
        delete del;


    }
    s->next=p;
    return sum;
}
// ------------------------(snip)-----------------------------
// YOUR SOLUTION ENDS HERE -- YOU DON'T NEED TO ERASE THE REST

#ifndef CONTEST

node * cons(int x, node *next) {
  node *n = new node;
  n->data = x;
  n->next = next;
  return n;
}

// Don't mind this, it just prints a list!
ostream & operator << (ostream & out, node *t) {
  for (; t != nullptr; t = t->next) out << t->data << " -> ";
  return out << "null";
}

int main() {
  node *l = cons(1, cons(2, cons(3, cons(4, cons(5, cons(6, nullptr))))));
  cout << "l = " << l << endl;
  cout << "sum_and_remove(l, 2, 3) = " << sum_and_remove(l, 2, 3) << endl;
  cout << "l = " << l << endl;
  cout << "sum_and_remove(l, 1, 1) = " << sum_and_remove(l, 1, 1) << endl;
  cout << "l = " << l << endl;
  cout << "sum_and_remove(l, 2, 1) = " << sum_and_remove(l, 2, 1) << endl;
  cout << "l = " << l << endl;
  cout << "sum_and_remove(l, 1, 1) = " << sum_and_remove(l, 1, 1) << endl;
  cout << "l = " << l << endl;
}

#endif
