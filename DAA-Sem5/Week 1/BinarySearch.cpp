//06:06PM 20-07-2021
#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int findElement(int arr[], int n, int element, int *steps, int first, int last){
  int i;
  int found = 0;

  for(i=first; i<=last-1; i++){
    *steps += 1;

    if(element == arr[i]){
      found = 1;
      break;
    }
  }

  return found;
}

int main(){
  int i;
  int steps, found, loop;
  int *arr = (int *) malloc(sizeof(int));
  int n;
  int mid, first, last;
  int element;

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    steps = found = 0;

    cin>>n;

    arr = (int *) realloc(arr, n);

    readArray(arr, n);

    if(n %2 == 0){
      mid /= 2;
    }else{
      mid = (mid+1)/2;
    }

    cin>>element;

    if(element < arr[mid]){
      first = 0;
      last = mid;
    }else{
      first = mid;
      last = n;
    }

    found = findElement(arr, n, element, &steps, first, last);

    if(found == 1){
      cout<<"Present "<<steps<<'\n';
    }else{
      cout<<"Not Present "<<steps<<'\n';
    }
  }

  return 0;
}
