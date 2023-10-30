// IF YOU TOUCH ANYTHING OUTSIDE THE LINES MARKED WITH "(snip)"
// THEN YOU'D BETTER KNOW WHAT YOU'RE DOING!  YOUR CODE MAY NOT
// COMPILE.  YOU HAVE BEEN WARNED!

#ifndef CONTEST
#include <iostream>

using namespace std;

struct node
{
  int data;
  node *left, *right;
};

typedef node *tree;

#endif

// YOUR SOLUTION GOES HERE -- YOU DON'T NEED TO ERASE THE REST
// -----------------------------------------------------------
// MAKE SURE THAT YOUR SUBMISSION COMPILES, OTHERWISE YOU WILL
// GET ZERO POINTS TODAY AND THAT WILL BE A PITY!
// ------------------------(snip)-----------------------------
int sum_aux(tree tr);
int sum_one_child(tree &t)
{
  tree p = t;
  return sum_aux(p);
}

int sum_aux(tree tr)
{
  if (tr->right == nullptr && tr->left == nullptr)
    return 0;
  if ((tr->right != nullptr) && (tr->left == nullptr))
  { //||){
    // cout<<tr->data<<" ";
    return tr->data;
  }
  if ((tr->right == nullptr) && (tr->left != nullptr))
    return sum_aux(tr->left);
  else
  {
    return (sum_aux(tr->right) + sum_aux(tr->left));
  }
}
// ------------------------(snip)-----------------------------
// YOUR SOLUTION ENDS HERE -- YOU DON'T NEED TO ERASE THE REST

#ifndef CONTEST

node *mktree(int x, node *left, node *right)
{
  node *n = new node;
  n->data = x;
  n->left = left;
  n->right = right;
  return n;
}

// Don't mind this, it just prints a tree!
ostream &operator<<(ostream &out, node *t)
{
  if (t == nullptr)
    return out << "null";
  return out << t->data << "(" << t->left << "," << t->right << ")";
}

int main()
{
  node *t = mktree(42,
                   mktree(17,
                          mktree(22, mktree(6, nullptr, nullptr), nullptr),
                          mktree(4, nullptr, mktree(78, nullptr, nullptr))),
                   mktree(37,
                          nullptr,
                          mktree(89, nullptr, nullptr)));
  cout << "t =     42" << endl;
  cout << "       /  \\" << endl;
  cout << "     17    37" << endl;
  cout << "    /  \\    \\" << endl;
  cout << "  22    4    89" << endl;
  cout << "  /      \\" << endl;
  cout << " 6        78" << endl;
  cout << "Sum of nodes that only have a right child" << endl;
  cout << "sum_one_child(t) = " << sum_one_child(t) << endl;
}

#endif
