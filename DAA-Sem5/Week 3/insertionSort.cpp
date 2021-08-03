#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;
  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void insertionSort(int *arr, int n, int *comparisons, int *shifts){
  int i, key, j;
  for (i = 1; i <= n-1; i++){
    *shifts += 1;
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key){
      *shifts += 1;
      *comparisons += 1;
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
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
  int i, j, loop;
  int n, shifts, comparisons;

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    shifts = comparisons = 0;

    cin>>n;

    int arr[n];

    readArray(arr, n);

    insertionSort(arr, n, &comparisons, &shifts);

    printArray(arr, n);

    cout<<"comparisons = "<<comparisons<<'\n'<<"shifts = "<<shifts<<'\n';
  }
  return 0;
}
