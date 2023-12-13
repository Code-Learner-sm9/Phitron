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
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  tmp->next = newNode;
}

void print_linked_list(Node *head)
{
  cout << "Your Linked List: ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->value << endl;
    tmp = tmp->next;
  }
  cout << endl;
}
int main()
{
  Node *head = NULL; //with this statement we declared that the list is empty
  // Node *head = new Node(10);//with this statement we declared that the list has one value 10 and its not empty
  while (true)
  {
    cout << "Option 1: Insert at Tail" << endl;
    cout << "Option 2: Print the Linked List" << endl;
    cout << "Option 3: Terminate" << endl;

    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "Insert your Value: ";
      int v;
      cin >> v;
      Insert_at_Tail(head, v);
    }
    else if (op == 2)
    {
      print_linked_list(head);
    }
    else if (op == 3)
    {
      break;
    }
  }

  return 0;
}