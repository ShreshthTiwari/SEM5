//10-08-2021
#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void Swap(int *a, int *b){
  int temp = *a;

  *a = *b;
  *b = temp;
}

int Partition(int *arr, int low, int high){
  int pivot = arr[high];
  int i = low-1, j;

  for(j=low; j<=high-1; j++){
    if(arr[j] <= pivot){
      i++;
      Swap(&arr[i], &arr[j]);
    }
  }

  Swap(&arr[i+1], &arr[j]);
  return (i+1);
}

void quickSort(int *arr, int low, int high){
  if(low < high){
    int pi = Partition(arr, low, high);
    quickSort(arr, low, pi-1);
    quickSort(arr, pi+1, high);
  }
}

void printArray(int arr[], int n){
  int i;
  for(i=0; i<=n-1; i++){
    cout<<arr[i]<<' ';
  }
  cout<<'\n';
}

int main(){
  int i, loop;
  int n;
  int j, k;

  cin>> loop;

  for(i=0; i<=loop-1; i++){
    cin>> n;

    int arr[n];

    readArray(arr, n);

    quickSort(arr, 0, n-1);

    printArray(arr, n);
  }

  return 0;
}
