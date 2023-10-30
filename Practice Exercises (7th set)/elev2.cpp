// elev2.cpp
#include <cstdio>
#define nmax 1000000
void swapp(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partitionn(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swapp(&arr[i], &arr[j]);
        }
    }
    swapp(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partitionn(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int n, b;
    scanf("%d %d", &n, &b);
    int *a = new int[nmax];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, n - 1);
    int first = 0, last = n - 1, trips = 0;
    while (first < last)
    {
        if (a[first] + a[last] <= b)
        {
            trips++;
            first++;
            last--;
        }
        else
        {
            trips++;
            last--;
        }
    }
    if (first == last)
        trips++;
    printf("%d\n", trips);
    return 0;
}
