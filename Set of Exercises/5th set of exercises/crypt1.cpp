// crypt1.cpp
#include <iostream>
#include <string>
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
void changeme(string &p, char a[])
{
    char A[26];
    int i, j, pos; // pos=position
    for (i = 0; i < 26; i++)
        A[i] = (a[i] - 'a' + 'A');
    for (i = 0; i < p.size(); i++)
    {
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            for (j = 'a'; j <= 'z'; j++)
                if (p[i] == (j))
                {
                    pos = j - 'a';
                    break;
                }
            p[i] = a[pos];
        }
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            for (j = 'A'; j <= 'Z'; j++)
                if (p[i] == (j))
                {
                    pos = j - 'A';
                    break;
                }
            p[i] = A[pos];
        }
    }
}
int main()
{
    char ne[26];
    string buff;
    int i;

    for (i = 0; i < 26; i++)
        cin >> ne[i];

    getline(cin, buff); // gia na katharisei to buffer
    // buff="1";//na min einai adio
    if (check1(ne))
        cout << "error" << endl;
    else
    {
        while (true)
        { // buff.size()!=0
            getline(cin, buff);
            changeme(buff, ne);
            cout << buff << endl;
        }

        // cout<<prot<<endl;
    }
    return 0;
}
