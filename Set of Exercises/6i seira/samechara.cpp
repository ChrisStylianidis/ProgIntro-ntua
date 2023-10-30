//samechara.cpp
#include<cstdio>
#include<stdio.h>
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
bool elegxos(int A[],int B[], int N){
for(int i=0;i<N;i++)
    if(A[i]!=B[i])
        return false;
    return true;
}

int synartisi (int A[],int B[], int N){
int mini,i=0,j=0;

    while(A[i]==B[i] && i<N && j<N)
          i++;j++;
    if(A[i]<B[i]) return A[i];
    else return B[i];
}
int synartisi2 (int A[],int B[], int N){
int maxi,i=N-1,j=N-1;
    while(A[i]==B[i] && i>=0 && j>=0)
          i--;j--;
    if(A[i]>B[i])return A[i];
    else return B[i];
}
int main(){
int N;
scanf("%d",&N);
int A[N],B[N];
for(int i=0;i<N;i++)
    scanf("%d",&A[i]);
for(int i=0;i<N;i++)
    scanf("%d",&B[i]);
quickSort(A,0,N-1);
quickSort(B,0,N-1);
//for(int i=0;i<N;i++) cout<<A[i]<<" "; cout<<endl; for(int i=0;i<N;i++) cout<<B[i]<<" ";
if(elegxos(A,B,N)==true)
    printf("yes\n");
else
    printf("no %d %d\n",synartisi(A,B,N),synartisi2(A,B,N));

return 0;
}
