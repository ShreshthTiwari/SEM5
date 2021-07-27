//27-07-2021
#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

void findIndicies(int arr[], int n){
  int i, j, k;
  bool flag = false;

  for(i=0; i<=n-3; i++){
    for(j=i+1; j<=n-2; j++){
      for(k=j+1; k<=n-1; k++){
        if((arr[i] + arr[j]) == arr[k]){
          flag = true;
          cout<<i+1<<','<<j+1<<','<<k+1<<'\n';
          return;
        }
      }
    }
  }

  cout<<"No sequence fund\n";
}

int main(){
  int loop;
  int i, n;

  cin>>loop;

  for(i=0; i<=loop-1; i++){

    cin>>n;

    int arr[n];

    readArray(arr, n);

    findIndicies(arr, n);
  }

  return 0;
}
