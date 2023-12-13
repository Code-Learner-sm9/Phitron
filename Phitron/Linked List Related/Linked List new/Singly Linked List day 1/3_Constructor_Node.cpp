#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int val;
  node* next;
  node(int v)//constructor
  {
    this->val=v;
    // In the code snippet this->val = v;, it appears that you are 
    // using this to access the val
    //  member variable of the current object and assign it a value v.
    this->next=NULL;
  }

  //I can use the same objects name in the constructor parameter name;
  // node(int val)
  // {
  //   this->val=val;
  //   this->next=NULL;
  // }

};
int main()
{
  //a and b are objects
  node a(10);
  node b(20);
  a.next=&b;//shodhu jader next ar value null na tader nije change korbo.
  // b.next=NULL: dewa lagbe na coz node construct a shob gular default next ar man NULL dewa ache.

  cout<<a.val<<endl;
  cout<<a.next->val<<endl;
  

  return 0;
}