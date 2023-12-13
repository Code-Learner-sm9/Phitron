#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;

  Node(int value)
  {
    this->value=value;
    this->next=NULL;
  }
};
int main()
{
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);

  a->next=b;
  b->next=c;
  c->next=d;

  //not a good idea to print values
  // cout<<a->value<<endl;
  // cout<<a->next->value<<endl;
  // cout<<a->next->next->value<<endl;
  // cout<<a->next->next->next->value<<endl;

  while(a != NULL)
  {
    cout<<a->value<<endl;
    a=a->next;//means here we have 4 objects a,b,c,d.
    //first a->value prints 10.then a=a->next means position a to next
    //of its position that means to the position of b.now a is in b.
    //so it will call then a->value and as a is sitting on b's position
    //it will call b's value then a=a->next means position yourself on 
    //your next means c and so on
    //when it comes to last object that means d so its address is NULL
    //so then we will stop.
  }

  //Problem Arise when we want to print twice the output value .
  //see on next code.

  
  return 0;
}