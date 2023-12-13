// linked list ar each value jetake ami boli oigula aketa node
// ai node/group ar 2 ta part akta value ar arekta address ar pointer.
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
void Insert_at_tail(Node *&head, int v)
{
  Node *newNode = new Node(v);
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
void print_linked_list(Node *head)
{
  cout << "Your Linked List: " << endl;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}
int main()
{
  cout << "Enter Value: ";
  int value;
  Node *head = NULL;
  while (true)
  {
    cin >> value;
    if (value == -1)
    {
      break;
    }
    Insert_at_tail(head, value);
  }
  print_linked_list(head);

  return 0;
}