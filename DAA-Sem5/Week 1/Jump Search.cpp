//06:06PM 20-07-2021
#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int searchElement(int arr[], int n, int element, int *steps){
  int i, x;
  int found = 0;
  int m = sqrt(n);

  while(arr[m] <= element && m < n){
    *steps += 1;
    i = m;
    m += sqrt(n);

    if(m > n)
      return 0;
  }

  for(x = i; x < n; x++){
    *steps += 1;
    if(arr[x] == element){
      found = 1;
    }
  }

  return found;
}

int main(){
  int loop;
  int i;
  int found, steps;
  int element, n;

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    found = steps = 0;

    cin>>n;

    int arr[n];

    readArray(arr, n);

    cin>>element;

    found = searchElement(arr, n, element, &steps);;

    if(found == 1){
      cout<<"Present "<<steps<<'\n';
    }else{
      cout<<"Not Present "<<steps<<'\n';
    }
  }

  return 0;
}
