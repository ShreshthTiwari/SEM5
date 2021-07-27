//27-07-2021
#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int findElement(int arr[], int n, int element){
  int i, countElement = 0;
  int first, mid, last;

  if(n %2 == 0){
    mid = n/2;
  }else{
    mid = (n+1)/2;
  }

  if(element < mid){
    first = 0;
    last = mid;
  }else{
    first = mid;
    last = n;
  }

  for(i=first; i<=last-1; i++){
    if(element == arr[i]){
      countElement++;
    }
  }

  return countElement;
}

int main(){
  int loop;
  int i;
  int n, countElement;
  int element;

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    countElement = 0;

    cin>>n;

    int arr[n];

    readArray(arr, n);

    cin>>element;

    countElement = findElement(arr, n, element);

    if(countElement > 0){
      cout<<element<<" - "<<countElement<<'\n';
    }else{
      cout<<"Key not present";
    }
  }

  return 0;
}
