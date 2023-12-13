// https://phitron.io/ph453/video/ph453-10-5-reverse-singly-linked-list
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
void reverse(Node*& head, Node* current)
{
  if(current->next == NULL)
  {
    head = current;
    return;
  }
  reverse(head,current->next);//current->next dilam jate pore node pai.
  current->next->next = current;
  current->next = NULL;
}
void print(Node* head)
{
  Node * temp = head;
  while(temp != NULL)
  {
    cout<<temp->value<<" ";
    temp = temp->next;
  }
}
int main()
{
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next = a;
  a->next = b;
  
  reverse(head,head);
  print(head);

  return 0;
}