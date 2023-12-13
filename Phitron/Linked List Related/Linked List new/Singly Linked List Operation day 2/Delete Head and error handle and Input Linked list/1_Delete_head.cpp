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

void Insert_at_Head(Node *&head, int value)
{
  cout << endl;

  Node *newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}

void Insert_at_Tail(Node *&head, int value)
{
  cout << endl;
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    cout << "Inserted at Head" << endl;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  cout << "Inserted at Tail" << endl;
}

void Insert_at_any_Position(Node *head, int pos, int v)
{
  cout << endl;
  Node *newNode = new Node(v);
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  cout << "Inserted at Position " << pos << endl;
}

void Delete_from_Position(Node *head, int position)
{
  cout << endl;
  Node *temp = head;
  for (int i = 0; i < position - 1; i++)
  {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;

  cout << "Deleted the Position " << position << endl;
}

void Print_the_linked_list(Node *head)
{
  cout << "Your Linked List: ";
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

void Delete_head(Node *&head)
// jeheto amra head ke update korbo tai &(direfference kore nibo)
{
  // jeheto amra head ke delete korbo tahole first amader head ke update korte hobe ajonno amra head = head->next dilam but head ke update kore felle head ar ager value garbage hishebe pore thakbe
  // oitar sathe amra connection hariye felbo and delete korte parbo na..abar first aei delete kore felle head ar sathe connected shob list chole jabe
  // tai amra present head ke temp ar modde rekhe head ke update kore then temp ke delete kore dilam.

  Node *temp = head;
  head = head->next;
  delete temp;
  cout << endl
       << "Deleted Head" << endl;
}
int main()
{
  Node *head = NULL;
  while (true)
  {
    cout << endl;
    cout << "Option 1: Insert at Head" << endl;
    cout << "Option 2: Insert at Tail" << endl;
    cout << "Option 3: Insert at Any Position" << endl;
    cout << "Option 4: Delete From any Position" << endl;
    cout << "Option 5: Print the Linked List" << endl;
    cout << "Option 6: Delete Head" << endl;
    cout << "Option 7: Terminate" << endl;

    cout << "Your Choice: ";
    int op;
    cin >> op;

    if (op == 1)
    {
      int value;
      cout << "Enter Value: " << endl;
      cin >> value;

      Insert_at_Head(head, value);
    }
    else if (op == 2)
    {
      int value;
      cout << "Enter Value: " << endl;
      cin >> value;
      Insert_at_Tail(head, value);
    }
    else if (op == 3)
    {
      int position, value;
      cout << "Enter Position: " << endl;
      cin >> position;

      cout << "Enter Value: " << endl;
      cin >> value;

      if (position == 0)
      {
        Insert_at_Head(head, value);
      }
      else
      {
        Insert_at_any_Position(head, position, value);
      }
    }
    else if (op == 4)
    {
      int position;
      cout << "Enter Position: " << endl;
      cin >> position;
      if (position == 0)
      {
        Delete_head(head);
      }
      else
      {
        Delete_from_Position(head, position);
      }
    }
    else if (op == 5)
    {
      Print_the_linked_list(head);
    }
    else if (op == 6)
    {
      Delete_head(head);
    }
    else if (op == 7)
    {
      break;
    }
  }

  return 0;
}