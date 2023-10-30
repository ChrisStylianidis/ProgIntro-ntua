// mulsum.cpp
#include <cstdio>
int main()
{
    int n, m, *a, sum = 0, temp = 0, result = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp = sum;
        for (int k = n - 1; k >= i; k--)
        {
            if ((k - i + 1) < result)
                break;
            if ((temp % m) == 0)
            {
                if ((k - i + 1) > result)
                    result = k - i + 1;
                break;
            }
            temp -= a[k];
        }
        sum -= a[i];
    }
    printf("%d\n", result);
    return 0;
}
