#include<bits/stdc++.h>

using namespace std;

int A[3][5], i;

void printingRow(int row){
  for(i=0; i<5; i++){
    cout<<A[row][i]<<" ";
  }
  cout<<'\n';
}

int main(){
  for(i=0; i<3; i++){
    int B = 3;
    printingRow(i);
  }

  cout<<B;

  return 0;
}
