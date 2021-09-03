#include<iostream>
#include "readArray.h"

using namespace std;

int main(){

//   ReadArray *ra = new ReadArray();
  ReadArray ra;
  int arr[100];
  int n;

  cin>>n;
//   ra->read(arr, n);
  ra.read(arr,n);

  for(int i=0; i<=n-1; i++){
    cout<<arr[i];
  }
  cout<<'\n';

  return 0;
}