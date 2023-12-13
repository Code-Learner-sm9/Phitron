#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node* prev;

  Node(int value)
  {
    this->value=value;
    this->next=NULL;
    this->prev=NULL;
  }
};
void normal_print(Node *head)
{
  Node * temp = head;
  while(temp != NULL) 
  {
    cout<<temp->value<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
void reverse_print(Node *tail)
{
  Node * temp = tail;
  while(temp != NULL)
  {
    cout<<temp->value<<" ";
    temp = temp->prev;
  }
  cout<<endl;
}
int main()
{
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* tail = b;

  // head->prev = NULL(by defualt deya ache)
  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;
  // b->next = NULL;(by default deya ache)
  
  normal_print(head);
  reverse_print(tail);
  
  return 0;
}