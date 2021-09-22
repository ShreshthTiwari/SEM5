#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void findCommonElements(int *arr1, int m, int *arr2, int n){
  int ce[m>n?m:n];
  int index = -1;

  for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
      if(arr1[i] == arr2[j]){
        index++;
        ce[index] = arr1[i];
      }
    }
  }

  if(index > -1){
    for(int i=0; i<=index; i++){
      cout<<ce[i]<<' ';
    }
    cout<<'\n';
  }else{
    cout<<"No Matching Elements"<<'\n';
  }
}

int main(){
  int m;

  cin>>m;

  int arr1[m];

  readArray(arr1, m);

  sort(arr1, arr1+m);

  int n;

  cin>>n;

  int arr2[n];

  readArray(arr2, n);

  sort(arr2, arr2+n);

  findCommonElements(arr1, m, arr2, n);

  return 0;
}