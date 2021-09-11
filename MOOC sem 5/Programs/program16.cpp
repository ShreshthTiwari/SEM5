#include<bits/stdc++.h>

using namespace std;

void sortArray(int *arr, int n){
  for(int i=0; i<n-1; ++i){
    for(int j=i+1; j<n-1; ++j){
      if(arr[i] > arr[j]){
        swap(arr[i], arr[j]);
      }
    }
  }
}

void printArray(int arr[], int n){
  for(int i=0; i<=n-1; i++){
    cout<<arr[i]<<" ";
  }
  cout<<'\n';
}

int main(){
  int arr[] = {2, 3, 1, 5, 4, 4};
  int n = sizeof(arr)/sizeof(arr[0]);

  sortArray(arr, n);
  cout<<"Array after sorting- ";
  printArray(arr, n);

  return 0;
}