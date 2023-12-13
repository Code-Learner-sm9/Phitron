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
void print_normal(Node *head)//O(n)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}
void print_reverse(Node *tail)//O(n)
{
  Node *temp = tail;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->prev;
  }
  cout << endl;
}
void insert_at_any_position(Node *&head, Node *tail, int position, int value)//O(n)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i <= position - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  newNode->next->prev = newNode;
  newNode->prev = temp;
  cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int value)//O(1)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int value)//O(1)
{
  Node *newNode = new Node(value);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = tail->next;
}
void delete_from_any_position(Node *&head, int position)//O(n)
{
  Node *temp = head;
  if (temp == NULL)
  {
    cout << "Invalid";
    return;
  }
  for (int i = 1; i <= position - 1; i++)
  {
    temp = temp->next;
  }
  Node *deleteValue = temp->next;
  temp->next = temp->next->next;
  temp->next->prev = temp;
  delete deleteValue;
}
void delete_tail(Node *&tail)//O(1)
{
  Node* deleteTail = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete deleteTail;
}
void delete_head(Node *&head,Node*&tail)//O(1)
{
  if(head == NULL)
  {
    cout<<"Invalid";
    return;
  }
  Node * deleteHead = head;
  head = head->next;
  head->prev =NULL;
  delete deleteHead;
}
int size(Node *head)//O(n)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
  cout << endl;
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;
  b->next = c;
  c->prev = b;
  Node *tail = c;
  int position;
  cin >> position;
  if(position == 0)
  {
    delete_head(head,tail);
  }
  else if (position > size(head))
  {
    cout << "Invalid"<<endl;
  }
  else if(position == size(head)-1)
  {
    delete_tail(tail);
  }
  else
  {
    delete_from_any_position(head, position);
  }

  // int position, value;
  // cout << "Enter Position and Value: " << endl;
  // cin >> position >> value;

  // if (position == size(head))
  // {
  //   insert_at_tail(head, tail, value);
  // }
  // else if (position >= size(head))
  // {
  //   cout << "Invalid";
  // }
  // else if (position == 0)
  // {
  //   insert_at_head(head, tail, value);
  // }
  // else
  // {
  //   insert_at_any_position(head, tail, position, value);
  // }

  print_normal(head);
  print_reverse(tail);
  return 0;
}