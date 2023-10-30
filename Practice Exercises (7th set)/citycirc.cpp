// citycirc.cpp
#include <cstdio>
#define nmax 1000000
int main()
{
    int i, n, here = 0;
    int *a = new int[nmax];
    int start, money = 0, j;
    bool found = true;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (found && a[i] >= 0)
        {
            start = i;
            found = false;
        }
    }
    found = true;
    i = start; // ksekino apo ton proto thetiko
    while (i < n && found)
    {
        money = 0;
        j = i;
        do
        {
            money += a[j];
            j++;
            if (j == n)
                j = 0;

        } while (money >= 0 && j != i);
        if (money >= 0)
        {
            here = i + 1;
            found = false;
        }

        i++;
    }

    printf("%d\n", here);
    return 0;
}
