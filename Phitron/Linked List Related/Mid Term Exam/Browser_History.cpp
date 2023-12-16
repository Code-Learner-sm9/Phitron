#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  string value;
  Node *next;
  Node *prev;

  Node(string value)
  {
    this->value = value;
    this->next = NULL;
    this->prev = NULL;
  }
};
void insert_at_tail(Node *&head, Node *&tail, string address)
{
  Node *newNode = new Node(address);
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
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}
void visit(Node *&head, Node *&tail, string address) {
  Node *temp = head;
  while (temp != NULL) {
    if (temp->value == address) {
      head = temp;
      tail = temp;
      cout << temp->value << endl;
      return; 
    }
    temp = temp->next;
  }

  
  for (Node *it = head; it != NULL; it = it->next) {
    if (it->value != it->next->value) {
      cout << "Not Available" << endl;
      return; 
    }
  }
  cout << "Not Available" << endl;
}

void next(Node *&head, Node *&tail)
{
  if(head == NULL)
  {
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
    cout << temp->value << endl;
    head = temp;
    tail = temp;
    return;
  }
  cout << "Not Available" << endl;
}
void prev(Node *&head, Node *&tail)
{
  if(tail == NULL)
  {
    return;
  }
  Node *temp = head;
  while (temp->prev != NULL)
  {
    temp = temp->prev;
    cout << temp->value << endl;
    head = temp;
    tail = temp;
    return;
  }
  cout << "Not Available" << endl;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  string address;
  while (true)
  {
    cin >> address;
    if (address == "end")
      break;
    insert_at_tail(head, tail, address);
  }
 
  int query;
  cout << endl;
  cin >> query;
  string choose;
  for (int i = 0; i < query; i++)
  {
    cin >> choose;
    string addName;
    if (choose == "visit")
    {
      cin >> addName;
      visit(head, tail, addName);
    }
    else if (choose == "next")
    {
      next(head, tail);
    }
    else
    {
      prev(head, tail);
    }
  }

  return 0;
}