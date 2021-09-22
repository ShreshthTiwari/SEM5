#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void findElements(int arr[], int n, int key){
  bool found = false;
  int i, j;

  for(i=0; i<=n-2; i++){
    for(j=i+1; j<=n-1; j++){
      if(arr[i] + arr[j] == key){
        found = true;
        break;
      }
    }
    if(found){
      break;
    }
  }

  if(found){
    cout<<arr[i]<<' '<<arr[j]<<'\n';
  }else{
    cout<<"No Such Elements Exist"<<'\n';
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

    int key;

    cin>>key;

    findElements(arr, n, key);
  }

  return 0;
}