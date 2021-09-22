#include<bits/stdc++.h>

using namespace std;

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void Merge(int arr[], int const left, int const mid, int const right){
  int subArrayOne = mid - left + 1;
  int subArrayTwo = right - mid;

  int *leftArray = new int[subArrayOne], *rightArray = new int[subArrayTwo];

  for (int i = 0; i < subArrayOne; i++)
    leftArray[i] = arr[left + i];
  for (int j = 0; j < subArrayTwo; j++)
    rightArray[j] = arr[mid + 1 + j];

  int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
  int indexOfMergedArray = left;

  while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
    if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
      arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
      indexOfSubArrayOne++;
    }
    else {
      arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
      indexOfSubArrayTwo++;
    }
      indexOfMergedArray++;
  }
  while (indexOfSubArrayOne < subArrayOne) {
    arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
    indexOfSubArrayOne++;
    indexOfMergedArray++;
  }
  while (indexOfSubArrayTwo < subArrayTwo) {
    arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
    indexOfSubArrayTwo++;
    indexOfMergedArray++;
  }
}

void mergeSort(int *arr, int first, int last){
  if(first >= last)
    return;

  int mid = first + (last - first) / 2;
  mergeSort(arr, first, mid);
  mergeSort(arr, mid+1, last);
  Merge(arr, first, mid, last);
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

  cin>>loop;

  for(i=0; i<=loop-1; i++){

    cin>>n;

    int arr[n];

    readArray(arr, n);

    mergeSort(arr, 0, n-1);

    printArray(arr, n);
  }
}
