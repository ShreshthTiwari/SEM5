#include <bits/stdc++.h>

using namespace std;

int main(){
  int a = 5, b = 8;

  cout<<"Maximum = "<<max(a, b);

  cout<<"\nMinimum = "<<min(a, b);

  swap(a, b);

  cout<<"\na = "<<a<<"\tb = "<<b<<'\n';

  int number = 2;
  double cubicRoot;

  cubicRoot = pow((double) (number), 1.0/3);

  cout<<cubicRoot<<'\n';
  cout<<fixed<<setprecision(10)<<cubicRoot<<'\n';
  cout<<fixed<<setprecision(3)<<cubicRoot<<'\n';

  return 0;
}
