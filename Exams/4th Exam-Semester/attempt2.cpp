// attempt2.cpp
#include <cstdio>
int main()
{
    int n, k, sum = 0, *a, sizee, tempsum, *start, *endof, mod, *difference, result = 0;
    scanf("%d %d", &n, &k);
    sizee = n + 1;
    a = new int[sizee];
    a[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &tempsum);
        sum = sum + tempsum;
        a[i] = sum;
    }

    start = new int[k];
    for (int i = 0; i < k; i++)
        start[i] = k + 1;
    endof = new int[k];
    for (int i = 0; i < k; i++)
        endof[i] = -1;

    for (int i = 0; i <= n; i++)
    {
        mod = a[i] % k;
        if (start[mod] != k + 1)
            continue;
        start[mod] = i;
    }

    for (int i = n; i >= 0; i--)
    {
        mod = a[i] % k;
        if (endof[mod] != -1)
            continue;
        endof[mod] = i;
    }
    difference = new int[k];
    for (int i = 0; i < k; i++)
        difference[i] = endof[i] - start[i];

    for (int i = 0; i < k; i++)
        if (difference[i] > result)
            result = difference[i];

    printf("%d\n", result);

    return 0;
}
