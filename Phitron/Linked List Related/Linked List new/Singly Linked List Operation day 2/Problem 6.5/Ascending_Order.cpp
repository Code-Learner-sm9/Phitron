//Solution:https://www.geeksforgeeks.org/check-linked-list-sorting-order/
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
void insert_at_tail(Node *&head, int value)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

bool ascending_order(Node *head)
{

  for (Node *temp = head; temp->next != NULL; temp = temp->next)
  {
    if (temp->value > temp->next->value)
    {
      return false;
    }
  }
  return true;
}
void print_the_linked_list(Node *head)
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
  while (true)
  {
    int value;
    cin >> value;
    if (value == -1)
    {
      break;
    }
    insert_at_tail(head, value);
  }
  print_the_linked_list(head);
  cout << endl;
  
  bool result = ascending_order(head);
  if (result)
  {
    cout << "Yes. The Elements are Sorted and in Asecending Order." << endl;
  }
  else
  {
    cout << "No. The Elements are not Sorted and in Ascending Order." << endl;
  }

  return 0;
}