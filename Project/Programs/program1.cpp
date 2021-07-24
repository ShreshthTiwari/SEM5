#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int a = 5, b = 8;

  cout<<"Maximum = "<<max(a, b);

  cout<<"\nMinimum = "<<min(a, b);

  swap(a, b);

  cout<<"\na = "<<a<<"\tb = "<<b;
}
