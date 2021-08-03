#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;
  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void selectionSort(int *arr, int n, int *comparisons, int *swaps){
  int i, j, index;

  for(i=0; i<=n-2; i++){
    *swaps += 1;
    for(j=i+1; j<=n-1; j++){
      *comparisons += 1;
      if(arr[j] < arr[i]){
        swap(arr[j], arr[i]);
      }
    }
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
  int comparisons, swaps;
  int n;

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    comparisons = swaps = 0;

    cin>>n;

    int arr[n];

    readArray(arr, n);

    selectionSort(arr, n, &comparisons, &swaps);

    printArray(arr, n);

    cout<<"comparisons = "<<comparisons<<'\n'<<"swaps = "<<swaps<<'\n';
  }

  return 0;
}
