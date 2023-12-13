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
  //Solution:

  Node* temp = a;
  while(temp != NULL)
  {
    cout<<temp->value<<endl;
    temp=temp->next;
  }
  temp=a;
  cout<<"Second Time:"<<endl;
  while(temp != NULL)
  {
    cout<<temp->value<<endl;
    temp=temp->next;
  }



  /*
  while(a != NULL)
  {
    cout<<a->value<<endl;
    a=a->next;
  }
  */
  

  //Problem Arise when we want to print twice the output value .

  /*
  while(a!=NULL)
  {
    cout<<a->value<<endl;
    a = a->next;
  }
  */
  
  //so we wanted to print twice but it prints only one time
  //why
  //bcz head which is a here is now moved to NULL position in the previous
  //while loop so we cant get any value from NULL position.

  //to solve this problem we can store head in a temporary pointer object.




  
  return 0;
}