// cntprim.cpp
#include <iostream>
using namespace std;
int main()
{ // uparxei pio apodotikos algorithmos
    long long N;
    int c, ans = 0;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        c = 0;
        for (int j = 2; j < (i / 2 + 1); j++)
            if (i % j == 0)
                c++;
        if (c == 0)
            ans += 1;
    }
    cout << ans << endl;

    return 0;
}
