//06:06PM 20-07-2021
#include<bits/stdc++.h>

using namespace std;

int main(){
  int loop;
  int i;
  int found, steps;
  int *arr = (int *) malloc(sizeof(int));

  cin>>loop;

  for(i=0; i<=loop-1; i++){
    found = steps = 0;

    cin>>n;

    arr = (int *) realloc(arr, n);


  }
}


/*
#include<stdio.h>
#include<stdlib.h>

int main(){
  int loop, n;
  int i, j, k, temp;
  int element;
  int arr[100];
  int first = 0, last;
  int steps = 0, found = 0;
  int l;

  scanf("%d", &loop);

  for(i=0; i<=loop-1; i++){
  	found = steps = 0;

  	scanf("%d", &n);

  	last = n-1;

  	for(j=0; j<=n-1; j++){
  	  scanf("%d", &arr[j]);
	}

	for(j=0; j<=n-1; j++){
	  steps++;
	  for(k=0; k<n-1-j; k++){
	  	steps++;
	  	if(arr[k] > arr[k+1]){
	  	  temp = arr[k];
	  	  arr[k] = arr[k+1];
	  	  arr[k+1] = temp;
		}
	  }
	}

	scanf("%d", &element);

	for(j=0; j<=n-1; j+=3){
	  steps++;
	  l=j+2;
	  if(l > n-1){
	  	l = n-1;
	  }
	  if(element >= arr[j] && element <= arr[l]){
	  	first = j;
	  	last = l;
	  	break;
	  }
	}

	for(j=first; j<=last; j++){
	  steps++;
	  if(element == arr[j]){
	  	found = 1;
	  	break;
	  }
	}

	if(found == 1){
	  printf("Present %d\n", steps);
	}else{
	  printf("Not Present %d\n", steps);
	}
  }
}
*/
