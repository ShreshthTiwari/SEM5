#include<bits/stdc++.h>

using namespace std;


void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int findDifference(int arr[], int n, int key){
  int i,j, k=2;
  int diffCount=0;

  for(i=n-1; i>=1; i--){
    for(j=0; j<=n-k; j++){
      if(abs(arr[i] - arr[j]) == key){
        diffCount++;
      }
    }
    k++;
  }

  return diffCount;
}

int main(){
  int loop;
  int i;
  int n;
  int key;
  int diffCount;

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    cin>> n;

    int arr[n];

    readArray(arr, n);

    cin>>key;

    diffCount = findDifference(arr, n, key);

    if(diffCount > 0){
      cout<<diffCount<<'\n';
    }else{
      cout<<"No pair found\n";
    }
  }

  return 0;
}
