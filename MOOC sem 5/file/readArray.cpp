#include<iostream>
#include "readArray.h"

using namespace std;

void readArray::read(int* arr, int n){
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}