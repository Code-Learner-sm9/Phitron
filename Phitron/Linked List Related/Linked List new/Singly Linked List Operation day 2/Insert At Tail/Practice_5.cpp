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

void Insert_at_Tail(Node *&head, int v)
{
  Node *newNode = new Node(v);
  Node *temp = head;
  if (head == NULL)
  {
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl;
    return;
  }

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  cout << endl
       << "Inserted at Tail" << endl;
}

void print_the_Linked_list(Node *head)
{
  cout << endl
       << "Your Linked List: " << endl;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}

void Insert_at_any_Position(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;

  cout << endl
       << "Inserted at Position:" << pos << endl;
}
int main()
{
  Node *head = NULL;
  // Node* head = new Node(10);

  while (true)
  {
    cout << endl;
    cout << "Option 1: Insert at Tail" << endl;
    cout << "Option 2: Print the Linked List" << endl;
    cout << "Option 3: Insert at any Position" << endl;
    cout << "Option 4: Terminate" << endl;

    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "Enter Your Value:" << endl;
      int val;
      cin >> val;
      Insert_at_Tail(head, val);
    }
    else if (op == 2)
    {
      print_the_Linked_list(head);
    }
    else if (op == 3)
    {
      int position, value;
      cout << "Enter Position: " << endl;
      cin >> position;

      cout << "Enter Value: " << endl;
      cin >> value;

      Insert_at_any_Position(head, position, value);
    }
    else if (op == 4)
    {
      break;
    }
  }

  return 0;
}