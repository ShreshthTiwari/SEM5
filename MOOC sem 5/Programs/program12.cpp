#include<bits/stdc++.h>

using namespace std;

int backInd = -1;
int frontInd = 0;
int Queue[100];

void push(int x){
  ++backInd;
  Queue[backInd] = x;
}

void pop(){
  Queue[frontInd] = 0;
  ++frontInd;
}

bool isEmpty(){
  if(backInd < frontInd)
    return true;
  else
    return false;
}

int Front(){
  return Queue[frontInd];
}

int main(){
  push(1);
  push(2);

  if(!isEmpty())
    cout<<Front();

  pop();
  pop();

  return 0;
}
