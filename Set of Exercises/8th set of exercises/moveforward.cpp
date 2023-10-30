// moveforward.cpp
#include <cstdio>
class list
{
public:
    list();
    bool empty();
    int size();
    void add(int k, int x);
    int get(int k);
    void remove(int k);
    void show();
    int searchMF(int x);

private:
    struct node
    {
        int info;
        node *next;
    };
    node *f, *r;
    int megg;
};

list::list()
{
    f = r = nullptr;
    megg = 0;
}
int list::size()
{
    return megg;
}
bool list::empty()
{
    return f == nullptr;
}
void list::add(int k, int x)
{
    megg++;
    node *n1 = new node;
    n1->info = x;
    n1->next = nullptr;
    if (k == 1)
    {
        n1->next = f;
        f = n1;
        return;
    }
    node *n2 = f;
    for (int i = 0; i < k - 2; i++)
        n2 = n2->next;
    n1->next = n2->next;
    n2->next = n1;
}
void list::remove(int k)
{
    megg--;
    node *p = f;
    if (k != 1)
    {
        node *d;
        for (int i = 1; i < k - 1; i++)
            p = p->next;
        d = p->next;

        p->next = (p->next)->next;

        delete d;
    }
    else
    {
        f = f->next;
        delete p;
    }
}

int list::get(int k)
{
    node *n = f;
    int ans;
    for (int i = 1; i < k; i++)
    {
        n = n->next;
    }
    return n->info;
}

void list::show()
{
    node *p = f;
    while (p != nullptr)
    {
        printf("%d ", p->info);
        p = p->next;
    }
    printf("\n");
    delete p;
}
int list::searchMF(int x)
{
    node *p = f;
    int i = 1;
    while (p->next != nullptr && p->info != x)
    {
        i++;
        p = p->next;
    }
    if (p->info == x)
        return i;
    if (p->next == nullptr)
        return 0;
}
int main()
{
    list lista;
    //    printf("%d",lista.empty());
    int N, k, x;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &k, &x);
        lista.add(k, x);
    }
    int M, sum = 0;
    //    lista.show();
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &k);
        int thesi = lista.searchMF(k);
        if (thesi != 0)
        {
            lista.remove(thesi);
            lista.add(1, k);
        }
        sum += thesi;
    }
    printf("%d\n", sum);
    //    lista.show();

    return 0;
}
/*



*/
