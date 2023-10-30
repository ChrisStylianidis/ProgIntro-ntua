// skating.cpp
#include <cstdio>
#define nmax 1000000
int main()
{
    int i, j, n, sum = 0, maxx;
    int *a = new int[nmax];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    maxx = sum;
    for (i = 1; i < n; i++)
    {
        sum -= a[i - 1];
        if (sum > maxx)
            maxx = sum;
    }
    if (maxx < 0)
        maxx = 0;

    printf("%d\n", maxx);
    return 0;
}
