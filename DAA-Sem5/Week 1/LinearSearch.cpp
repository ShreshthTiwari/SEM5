//06:06PM 20-07-2021
#include<bits/stdc++.h>

using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int findElement(int arr[], int n, int element, int *steps){
  int i;
  int found = 0;

  for(i=0; i<=n-1; i++){
    *steps += 1;

    if(element == arr[i]){
      found = 1;
      break;
    }
  }
  return found;
}

int main(){
  int loop;
  int steps, found;
  int i, n;
  int *arr = (int *) malloc(sizeof(int));
  int element;

  scanf("%d", &loop);

  for(i=0; i<=loop-1; i++){
    steps = found = 0;

    cin>>n;

    arr = (int *) realloc(arr, n);

    readArray(arr, n);

    cin>>element;

    found = findElement(arr, n, element, &steps);

    if(found == 1){
      cout<<"Present "<<steps<<'\n';
    }else{
      cout<<"Not Present"<<steps<<'\n';
    }
  }
}
