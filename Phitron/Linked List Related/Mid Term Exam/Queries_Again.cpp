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
void insert_at_tail(Node *&head, Node *&tail, int value)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = tail->next;
}
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
void insert_at_any_position(Node *&head, Node *&tail, int position, int value)
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
  temp->next->prev = newNode;
  temp->next = newNode;
  newNode->prev = temp;
}
int size(Node *head)
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
void leftToright(Node *head)
{
  Node *temp = head;
  cout << "L -> ";
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout<<endl;
}
void rightToleft(Node *tail)
{
  Node *temp = tail;
  cout << "R -> ";
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->prev;
  }
  cout<<endl;
}
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int q;
  cin >> q;
  int value;
  int position;

  for (int i = 0; i < q; i++)
  {
    cin >> position >> value;
    if (position == 0)
    {
      insert_at_head(head, tail, value);
    }
    else if (position == size(head))
    {
      insert_at_tail(head, tail, value);
    }
    else if (position <= size(head))
    {
      insert_at_any_position(head, tail, position, value);
    }
    else if (position >= size(head))
    {
      cout << "Invalid" << endl;
      continue;
    }
    leftToright(head);
    rightToleft(tail);
  }
  return 0;
}