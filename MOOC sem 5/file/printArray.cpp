#include<iostream>
#include "printArray.h"

using namespace std;

void printArray::print(int arr[], int n){
  for(int i=0; i<=n-1; i++){
    cout<<arr[i]<<' ';
  }
  cout<<'\n';
}