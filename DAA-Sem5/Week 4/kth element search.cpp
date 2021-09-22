#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void findKthElement(int arr[], int n, int k){
  if(k >= n){
    cout<<"not present"<<'\n';
  }else{
    cout<<arr[k-1]<<'\n';
  }
}

int main(){
  int loop;

  cin>>loop;

  for(int i=0; i<=loop-1; i++){
    int n;

    cin>>n;

    int arr[n];

    readArray(arr, n);

    sort(arr, arr+n);

    int k;

    cin>>k;

    findKthElement(arr, n, k);
  }

  return 0;
}