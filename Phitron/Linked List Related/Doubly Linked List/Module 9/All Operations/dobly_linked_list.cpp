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
void insert_at_head(Node *&head, Node *&tail, int value)
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
void insert_at_tail(Node *&tail, Node *&head, int value)
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
  tail = newNode;
}
void insert_at_any_position(Node *&head, Node *&tail, int value, int position)
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
  newNode->next->prev = newNode;
  temp->next = newNode;
  newNode->prev = temp;
}
void delete_head(Node *&head)
{
  if (head == NULL)
  {
    cout << "Invalid" << endl;
    return;
  }
  Node *temp = head;
  head = head->next;
  head->prev = NULL;
  delete temp;
}
void delete_tail(Node *&tail)
{
  if (tail == NULL)
  {
    cout << "Invalid" << endl;
    return;
  }
  Node *temp = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete temp;
}
void delete_at_any_position(Node *& head,Node*&tail,int position)
{
  if(head == NULL)
  {
    cout<<"Invalid"<<endl;
    return;
  }
  Node * temp = head;
  for(int i=1;i<=position-1;i++)
  {
    temp= temp->next;
  }
  Node *store = temp->next;
  temp->next = temp->next->next;
  temp->next->prev = temp;
  delete store;
}
void print_regular(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}
void print_reverse(Node *tail)
{
  Node *temp = tail;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->prev;
  }
}
int Size(Node *head)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int position, value;
  cout << "Enter Value: " << endl;
  cout << "Enter Position: " << endl;
  int size = Size(head);
  cout << "Current Linked List: " << endl;
  print_regular(head);
  cout << "Size: " << size << endl;
  cout << endl
       << "Insertion: " << endl;
  while (true)
  {
    cin >> value;
    if (value == -1)
    {
      break;
    }
    cin >> position;
    if (position == 0)
    {
      insert_at_head(head, tail, value);
    }
    else if (position == Size(head))
    {
      insert_at_tail(tail, head, value);
    }
    else if (position <= Size(head))
    {
      insert_at_any_position(head, tail, value, position);
    }
    cout << "Size: " << Size(head) << endl;
  }
  print_regular(head);
  cout << endl;
  print_reverse(tail);

  cout << endl
       << "Deletion: " << endl;
  

  while (true)
  {
    cout << "Enter position: " << endl;
    cin >> position;
    if (position == -1)
    {
      break;
    }
    if (position == 0)
    {
      delete_head(head);
    }
    else if (position == Size(head) - 1)
    {
      delete_tail(tail);
    }
    else if (position <= Size(head))
    {
      
      delete_at_any_position(head,tail,position);
    }
  }
  print_regular(head);
  cout << endl;
  print_reverse(tail);
  return 0;
}