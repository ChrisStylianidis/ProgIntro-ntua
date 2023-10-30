// icecream.cpp
#include <cstdio>
#define nmax 1000000
#define odos 40000000
int main()
{
    int n, k, i, j, sum, megisto, minn, maxx; // dimiourgo ena pinaka loc o opios einai i odos
    int *a = new int[nmax];
    int *loc = new int[odos]();
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        loc[a[i]]++; // stin thesi tou kathe pediou afksano tin odo tou,
    }                // diavazo ola ta dedomena eisodou
    minn = a[0];
    maxx = a[n - 1];
    /*
    dld ston pinaka loc tha iparxoun asoi kai miden dilonontas etsi apo to i=minn mexri to i=maxx
    tin katastasi pou vriskete stin odo afti, gia to paradigma ena :
    6 2
    1
    3
    4
    6
    7
    9
    o pinakas loc[maxx-minn]=1 0 (1 1 0 1 1) 0 1
    i kaliteri thesi tou fortigou einai stin thesi loc[4], afou tha pane 4 paidia
    */
    sum = 0;
    for (i = minn; i <= minn + 2 * k; i++)
        sum += loc[i];
    megisto = sum;

    for (i = minn + k; i <= maxx - k; i++)
    { // ksekinaw apo tin thesi minn+k,den iparxei logos na psaxno stis protes theseis afou mporo na mazepso perissoterous "pelates"
        sum -= loc[i - k];
        sum += loc[i + k + 1];
        if (sum > megisto) // kai vrisko ton megisto apo aftous tous arithmous
            megisto = sum;
    }
    printf("%d\n", megisto);
    return 0;
}
