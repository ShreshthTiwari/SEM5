#include<iostream>

using namespace std;

int a;

void Printing(){
  cout<<a<<'\n';

  int a = 5;

  cout<<a<<'\n';
}

int main(){
  a = 100;

  Printing();

  int a = 60;

  cout<<a;

  return 0;
}
