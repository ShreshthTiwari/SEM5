#include<bits/stdc++.h>

using namespace std;

ifstream f("data10.in");
ofstream g("data10.out");

int main(){
  int i, n, element, elementCount;

  f>>n;

  int arr[n];

  for(i=0; i<=n-1; i++){
    f>>arr[i];
  }

  f>>element;

  elementCount = count(arr, arr+n, element);

  if(elementCount > 0){
    g<<"Element is present "<<elementCount<<" times.";
  }else{
    g<<"Element not present.";
  }

  return 0;
}
