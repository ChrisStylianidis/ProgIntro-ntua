// pairsum.cpp
#include <cstdio>
int main()
{
    int n1, n2, k, *a, *b, L, R, i, j, c = 0, athrisma;
    a = new int[1000000];
    b = new int[1000000];
    scanf("%d %d %d %d", &n1, &n2, &L, &R);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n1; i++)
    {
        if (a[i] + b[n2 - 1] < L)
            continue; // an to a[i] kai to megisto tou defterou pinaka einai mikrotero apo L den mpeno ston kopo na elegxo olous tous arithmous
        if (a[i] + b[0] > R)
            break; // an ftaso se ena megalo tou a pinaka pou to athrisma tou me to mikrotero tou b stamataw
        for (j = 0; j < n2; j++)
        {
            athrisma = a[i] + b[j];
            if (athrisma >= L && athrisma <= R)
                c++;
        }
        if (athrisma > R)
            j = n2; // gia na vgei apo to esoteriko loop
    }
    printf("%d\n", c);
    return 0;
}
/*

10 7 28 30
3 4 7 8 12 14 15 15 17 17
1 4 4 7 9 13 17
->5
*/
