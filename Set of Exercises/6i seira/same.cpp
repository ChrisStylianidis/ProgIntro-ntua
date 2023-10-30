//askisi14.cpp
#include<cstdio>
#define Nmax 50000
void swapp(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;}
int partitionn (int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++){
        if (arr[j] <= pivot)
        {
            i++;
            swapp(&arr[i], &arr[j]);
        }
    }
    swapp(&arr[i+1], &arr[high]);
    return (i + 1);}
void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partitionn(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);}}



bool same(int A[],int B[],int n){
int i;
for(i=0;i<n;i++)
    if(A[i]!=B[i])
        return false;
return true;}
int main(){
int i,j,n,A[Nmax],B[Nmax],minn,maxx;
bool flag;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&A[i]);
for(i=0;i<n;i++)
    scanf("%d",&B[i]);
quickSort(A,0,n-1);
quickSort(B,0,n-1);
/*
for(i=0;i<n;i++)
    printf("%d ",A[i]);
printf("\n");
for(i=0;i<n;i++)
    printf("%d ",B[i]);
printf("\n");
*/
if(same(A,B,n)){
    printf("yes\n");
}
/*
8
81 92 44 18 2 55 70 26
28 18 55 92 44 70 2 80
*/
else{
    for(i=0;i<n;i++){
        if(A[i]!=B[i]&&A[i]<B[i]){
            minn=A[i];
            break;
        }
        if(A[i]!=B[i]&&B[i]<A[i]){
            minn=B[i];
            break;}}
    for(i=n-1;i>=0;i--){
        if(A[i]!=B[i]&&A[i]>B[i]){
            maxx=A[i];
            break;
        }
        if(A[i]!=B[i]&&B[i]>A[i]){
            maxx=B[i];
            break;}}
    printf("no %d %d\n",minn,maxx);
}


return 0;}
