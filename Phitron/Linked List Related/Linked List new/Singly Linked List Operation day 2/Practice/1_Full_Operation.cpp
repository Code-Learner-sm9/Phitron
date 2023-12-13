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

void print_the_linked_list(Node *head)
{
  cout << "Your Linked List: " << endl;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insert_at_head(Node *&head, int value)
{
  Node *newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}

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
void Insert_at_any_position(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
    if(temp == NULL)
    {
      cout<<"Invalid Operation"<<endl<<endl;
      return;
    }
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
void Delete_head(Node *&head)
{
  if (head == NULL)
  {
    cout << "Invalid Operation" << endl<<endl;
    return;
  }
  Node *temp = head;
  head = temp->next;
  delete temp;
}

void delete_from_any_position(Node *head, int pos)
{
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
    if ( temp == NULL)
    {
      cout<<"Invalid Operation"<<endl<<endl;
      return;
    }
  }
  Node *deleteNode = temp->next;
  if(temp->next == NULL)
  {
    cout<<"Invalid Operation"<<endl<<endl;
    return;
  }
  temp->next = temp->next->next;
  delete deleteNode;
}
int main()
{
  Node *head = NULL;

  while (true)
  {
    cout << "Option 1: Print the Linked List" << endl;
    cout << "Option 2: Insert at Head" << endl;
    cout << "Option 3: Insert at Tail" << endl;
    cout << "Option 4: Insert at any Position" << endl;
    cout << "Option 5: Delete Head" << endl;
    cout << "Option 6: Delete From any Position" << endl;
    cout << "Option 7: Terminate" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
      print_the_linked_list(head);
    }
    else if (op == 2)
    {
      int value;
      cout << "Enter Value: " << endl;
      cin >> value;
      insert_at_head(head, value);
    }
    else if (op == 3)
    {
      cout << "Enter Value: " << endl;

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
    }
    else if (op == 4)
    {
      int pos, val;
      cout << "Enter Position:" << endl;
      cin >> pos;

      cout << "Enter Value:" << endl;
      cin >> val;
      if (pos == 0)
      {
        insert_at_head(head, val);
      }
      else
      {
        Insert_at_any_position(head, pos, val);
      }
    }
    else if (op == 5)
    {
      Delete_head(head);
    }
    else if (op == 6)
    {
      int pos;
      cout << "Enter Position:" << endl;
      cin >> pos;
      if(pos == 0)
      {
        Delete_head(head);
      }
      else
      {
      delete_from_any_position(head, pos);
      }
    }
    else if (op == 7)
    {
      break;
    }
  }
  return 0;
}