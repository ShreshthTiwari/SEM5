#include<bits/stdc++.h>

using namespace std;

void readArray(char *arr, int n){
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }  
}

void findOccurences(char arr[], int n){
  char element = arr[0];
  int count = 1, maxCount = 1;

  for(int i=0; i<=n-2; i++){
    if(arr[i-1] == arr[i]){
      continue;
    }
    count = 1;
    for(int j=i+1; j<=n-1; j++){
      if(arr[i] == arr[j]){
        count++;
      }
    }
    if(count > maxCount){
      maxCount = count;
      element = arr[i];
    }
  }

  if(maxCount > 1){
    cout<<element<<'-'<<maxCount<<'\n';
  }else{
    cout<<"No Duplicates Present"<<'\n';
  }
}

int main(){
  int loop;

  cin>>loop;

  for(int i=0; i<=loop-1; i++){
    int n;

    cin>>n;

    char arr[n];

    readArray(arr, n);

    sort(arr, arr+n);

    findOccurences(arr, n);
  }

  return 0;
}