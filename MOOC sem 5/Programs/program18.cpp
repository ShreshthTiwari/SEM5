#include<bits/stdc++.h>

using namespace std;

void sortArray(int *arr, int n){
  for(int i=0; i<=n-1; i++){
    for(int j=i+1; j<=n-1; j++){
      if(arr[i] > arr[j]){
        swap(arr[i], arr[j]);
      }
    }
  }
}

int findMajorityElement(int arr[], int n){
  int count;
  int maxCount = 0;
  int element;
  for(int i=0; i<=n-1; i++){
    count = 0;
    for(int j=0; j<=n-1; j++){
      if(arr[i] == arr[j]){
        count++;
      }
    }

    if(count > maxCount){
      maxCount = count;
      element = arr[i];
    }
  }

  return element;
}

int main(){
  int arr[] = {1, 1, 4, 5, 1, 6, 6, 1, 1, 3,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  sortArray(arr, n);

  int majorityElement = findMajorityElement(arr, n);

  cout<<"Majority Element- "<<majorityElement<<'\n';

  return 0;
}