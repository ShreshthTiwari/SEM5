#include<bits/stdc++.h>

using namespace std;

void ReadArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int binarySearch(int *arr, int n, int element){
  int left = 0, mid, right = n-1;
  int i;

  mid = (left + right) / 2;

  if(element == arr[mid]) return mid;
  else if(element < arr[mid])
    right = mid-1;
  else
    left = mid+1;

  for(i=left; i<=right; i++){
    if(element == arr[i])
      return i;
  }  

  return -1;
}

int main(){
  int i, n, m;
  int index = -1;
  int element;

  cin>>n;
  cin>>m;

  int arr[n];

  ReadArray(arr, n);

  for(i=0; i<=m-1; i++){
    cin>>element;

    index = binarySearch(arr, n, element);

    cout<<index<<'\n';
  }

  return 0;
}