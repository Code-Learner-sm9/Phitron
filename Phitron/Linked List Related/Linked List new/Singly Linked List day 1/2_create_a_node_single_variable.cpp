#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* addr;
};
int main()
{
  //a and b are objects
  //these objects has two properties: value and addr.
  node a,b;
  a.value=10;
  b.value=20;
  a.addr=&b;
  b.addr=NULL;//jeheto amader b ar por kono grp nai.

  cout<<a.value<<endl;
  cout<<(*a.addr).value<<endl;//without using b.value
  cout<<a.addr->value<<endl;
  return 0;
}