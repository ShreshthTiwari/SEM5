//06:06PM 20-07-2021
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
  int i, j, loop, n, element;
  int steps = 0, found = 0;
  int *arr = (int *) malloc(sizeof(int));

  scanf("%d", &loop);
  
  for(i=0; i<= loop-1; i++){
   	steps = found = 0;
  	
	scanf("%d", &n);
	
	arr = (int *) realloc(arr, n);
	
	for(j=0; j<=n-1; j++){
  	  scanf("%d", &arr[j]);
	}
	
	scanf("%d", &element);
	
	for(j=0; j<=n-1; j++){
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
