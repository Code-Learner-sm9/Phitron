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
  //here head and a is object bcz object are sitted after class name
  //and Node* head and Node* a is the objects addresses.

  
  Node* head = new Node(10);//here head is the first linked lists group object.and
  //Node* head means its not a group its the address of that group.
  Node* a = new Node(20);//here a is the next group object connected to linked list.
  //and Node* a is the next groups adress. here a,and head are containing group address.

  head->next=a;//in static node we wrote &a but here we write just a.
  //here we declare a as the groups address not object.as a is an address
  //so we dont have to write &a.

  cout<<head->value<<endl;//as head is a pointer so we used arrow sign.
  cout<<a->value<<endl;//same as head pointer, a is also a pointer.

  cout<<head->next->value<<endl;//here head->next refers basically a.
  
  return 0;
}