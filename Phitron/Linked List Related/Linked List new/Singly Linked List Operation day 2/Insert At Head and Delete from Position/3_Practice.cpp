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
  cout<<endl;
  // Insert at head 2 vabe kaj kore jodi head khali khali mane pura linked list khali tahole
  // head = newNode bollei hobe.
  // Node * newNode = new Node(value);
  // head = newNode;

  // ar jodi amn hoy Insert at head bolte ami bujhaichi je age thekei list ase just head ar value te new akta
  // value assign korbo tahole avabe likhbo .avabe likhe 2 vabei kaj korbe but just uprer ta likhle
  // age theke value thakle jevabe kaj kora dorkar shevabe korbe na.

  //1 avabe likhle hobe
  // Node *newNode = new Node(value);
  // Node * temp = head;
  // newNode->next = temp;
  // head = newNode;

  //2 abar avabeo hobe
  Node *newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}

void Insert_at_Tail(Node *&head, int value)
{
  cout<<endl;
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
  cout<<endl;
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

void Delete_from_Position(Node* head, int position)
{
  cout<<endl;
  Node * temp = head;
  for(int i = 0; i < position-1; i++)
  {
    temp =temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;

  cout<<"Deleted the Position"<<endl;

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
  cout<<endl;
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
    cout << "Option 6: Terminate" << endl;

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
      cout<<"Enter Position: "<<endl;
      cin>>position;
      Delete_from_Position(head,position);

    }
    else if (op == 5)
    {
      Print_the_linked_list(head);
    }
    else if (op == 6)
    {
      break;
    }
  }

  return 0;
}