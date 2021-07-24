//06:06PM 20-07-2021
#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, j ,k;
  int loop, n;
  int first, mid, last, element;
  int *arr = (int *) malloc(sizeof(int));
  int steps, found, temp;
  
  scanf("%d", &loop);
  
  for(i=0; i<=loop-1; i++){
  	steps = found = 0;
	
	scanf("%d", &n);
	
	arr = (int *) realloc(arr, n);
	
	for(j=0; j<=n-1; j++){
	  scanf("%d", &arr[j]);
	}
	
	scanf("%d", &element);
	
	if(n % 2 == 0){
	  mid = n/2;
	}else{
	  mid = (n+1)/2;	
	}
	
	if(element < arr[mid]){
	  first = 0;
	  last = mid;
	}else if(element >= arr[mid]){
	  first = mid;
	  last = n;
	}
	
	for(j=first; j<=last-1; j++){
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
