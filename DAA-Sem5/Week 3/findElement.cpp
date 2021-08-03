#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;
  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

bool findDuplicate(int arr[], int n){
  int i;
  bool found = false;

  for(i=0; i<=n-1; i++){
    if(arr[i] == arr[i+1]){
      found = true;
      break;
    }
  }

  return found;
}

int main(){
  int i, loop;
  int n;
  bool found;

  cin>>loop;

  for(i=0; i<=n-1; i++){
    found = false;
    cin>>n;

    int arr[n];

    readArray(arr, n);

    sort(arr, arr+n);

    found = findDuplicate(arr, n);

    if(found){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }
}
