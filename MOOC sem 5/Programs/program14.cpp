#include<bits/stdc++.h>

using namespace std;

void ReadArray(int *arr, int n){
  for(int i=0; i<=n-1; i++){
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
  int n;
  int element;
  int index;

  cin>> n;

  int arr[n];

  ReadArray(arr, n);

  cin>>element;

  index = binarySearch(arr, n, element);

  if(index > -1)
    cout<<"Found "<<index;
  else
    cout<<"Not Found";  
  cout<<'\n';
  
  return 0;
}