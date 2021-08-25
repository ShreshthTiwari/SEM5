#include<bits/stdc++.h>

using namespace std;

int arr[8];

void add(int left, int right, int num){
  int i;
  for(i=left; i<=right; i++){
    arr[i] += num;
  }
}

int main(){
  int i, n;
  int left, right, num;

  add(3, 6, 5);
  add(1, 4, 10);
  add(5, 8 ,10);

  for(i=0; i<=7; i++){
    cout<<arr[i]<<" ";
  }
  cout<<'\n';

  return 0;
}