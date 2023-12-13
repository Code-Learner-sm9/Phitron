#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int value;
  Node *next;
  Node *prev;

  Node(int value)
  {
    this->value = value;
    this->next = NULL;
    this->prev = NULL;
  }
};
void normal_print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}
void reverse_print(Node *tail)
{
  Node *temp = tail;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->prev;
  }
  cout << endl;
}
void insert_at_any_position(Node *&head, int position, int value)
{
  Node *newNode = new Node(value);
  Node * temp = head;
  for (int i = 0; i < position - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  newNode->next->prev = newNode;
  newNode->prev = temp;
}
void insert_at_head(Node * &head,Node* &tail,int value)
{
  Node* newNode = new Node(value);
  if(head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;

  head = newNode;
}
void insert_at_tail(Node *&head,Node*&tail,int value)
{
  Node * newNode = new Node(value);
  if(tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next =newNode;
  newNode->prev =tail;
  tail = tail->next;
  //alternative tail = newNode;
}
int size(Node * head)
{
  Node* temp = head;
  int count = 0;
  while(temp!= NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
int main()
{
  Node *head = NULL;
  Node* tail = NULL;
  int position,value;
  cout<<"Enter Value: "<<endl;
  cin>>value;
  insert_at_tail(head,tail,value);
  
  normal_print(head);
  reverse_print(tail);

  return 0;
}