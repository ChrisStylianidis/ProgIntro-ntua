// crypt1taketwo.cpp
#include <cstdio>
// #include<stdio.h>
using namespace std;
bool check1(char a[])
{
    int A[26] = {}, i, N = 26;
    for (i = 0; i < N; i++)
    {
        if (a[i] < 'a' || a[i] > 'z')
            return true;
    }
    for (i = 0; i < N; i++)
        A[a[i] - 'a']++;
    for (i = 0; i < 26; i++)
        if (A[i] > 1)
            return true;
    return false;
}
void changeme(char &p, char a[])
{
    char A[26];
    int i, j, pos; // pos=position
    for (i = 0; i < 26; i++)
        A[i] = (a[i] - 'a' + 'A');
    if (p >= 'a' && p <= 'z')
    {
        for (j = 'a'; j <= 'z'; j++)
            if (p == (j))
            {
                pos = j - 'a';
                break;
            }
        p = a[pos];
    }
    if (p >= 'A' && p <= 'Z')
    {
        for (j = 'A'; j <= 'Z'; j++)
            if (p == (j))
            {
                pos = j - 'A';
                break;
            }
        p = A[pos];
    }
}
int main()
{
    char ne[26], s;
    int i;

    for (i = 0; i < 26; i++)
        ne[i] = getchar();
    while (getchar() != '\n')
        ; // katharizo buffer
    if (check1(ne))
        printf("error\n");
    else
    {
        while (s != EOF)
        {
            s = getchar();
            if (s != EOF)
            {
                changeme(s, ne);
                printf("%c", s);
            }
        }
    }
    return 0;
}
