#include<iostream>
#include "readArray.h"
#include "printArray.h"

using namespace std;

int main(){
  int n;

  cin>>n;

  int arr[n];

  readArray ra;

  ra.read(arr, n);

  printArray pa;

  pa.print(arr, n);

  return 0;
}