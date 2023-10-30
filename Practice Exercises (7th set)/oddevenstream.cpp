// oddevenstream.cpp
#include <iostream>
int main()
{
    int n, A[1000000], i, odd = 0, even = 0, ans = 0, maxx = 0;
    std::cin >> (n);
    for (i = 0; i < n; i++)
    {
        std::cin >> (A[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
        if (abs(even - odd) < 2)
        {
            ans++;
            if (ans > maxx)
                maxx = ans;
        }
        else
            ans = 0;
    }
    std::cout << (maxx) << std::endl;

    return 0;
}
