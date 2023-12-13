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
void insert_at_tail(Node*& head,Node *&tail,int val)
{
  Node* newNode = new Node(val);
  
  if(head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = tail->next;
}
void print(Node*head)
{
  Node* temp = head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp = temp->next;
  }
}

int main()
{
  Node* head = NULL;
  Node* tail = NULL;
  int val;
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head,tail,val);
  }
  Node* i = head;
  Node* j =i;
  
  for(Node* i= head;i->next!=NULL;i=i->next)
  {
    for(Node* j=i->next;j!=NULL;j=j->next)
    {
      if(i->value > j->value)
      {
        swap(i->value,j->value);
      }
    }
  }
  Node* temp = head;
  while(temp->next != NULL)
  {
    if(temp->value == temp->next->value)
    {
      Node* del = temp->next;
      temp->next = temp->next->next;
      delete del;
    }
    if(temp->next == NULL) break;

    else if(temp->value != temp->next->value)
    {
      temp = temp->next;
    }
  }
  print(head);
  return 0;
}