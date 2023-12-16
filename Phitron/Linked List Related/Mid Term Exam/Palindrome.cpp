#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int value;
  Node *next;

  Node(int value)
  {
    this->value = value;
    this->next = NULL;
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
  tail = tail->next;
}
void reverse(Node *&head, Node *current)
{
  if (current->next == NULL)
  {
    head = current;
    return;
  }
  reverse(head, current->next);
  current->next->next = current;
  current->next = NULL;
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
bool isPalindrome(Node *head)
{
  Node *newhead = NULL;
  Node *newtail = NULL;
  Node *temp = head;
  while (temp != NULL)
  {
    insert_at_tail(newhead, newtail, temp->value);
    temp = temp->next;
  }
  reverse(newhead, newhead);
  Node *temp2 = newhead;
  temp = head;

  while (temp != NULL)
  {
    if (temp->value != temp2->value)
    {
      return false;
    }
    temp = temp->next;
    temp2 = temp2->next;
  }
  return true;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int value;
  while (true)
  {
    cin >> value;
    if (value == -1)
      break;
    insert_at_tail(head, tail, value);
  }
  if (isPalindrome(head))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}