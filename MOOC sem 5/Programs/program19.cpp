#include<bits/stdc++.h>

using namespace std;

struct Books{
  char Title[20];
  char Author[20];
  int ID;
  float price;
} book1;

void input(Books *b){
  cin >> b->Title;
}

int main(){
  book1.ID = 10;
  book1.price = 13.67;
  strcpy(book1.Title, "Data Structure");
  strcpy(book1.Author, "Mark");

  cout<<"Book 1-\n";
  cout<<"Title- "<<book1.Title<<'\n';
  cout<<"Author- "<<book1.Author<<'\n';
  cout<<"ID- "<<book1.ID<<'\n';
  cout<<"Price- "<<book1.price<<'\n';

  Books book2;
  book2.ID = 100;
  cout<<book2.ID<<'\n';

  return 0;
}