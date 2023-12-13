// Solution: // https://www.codingninjas.com/studio/library/count-duplicates-in-a-linked-list
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
int countSize(Node *head)
{
  cout << endl;
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
int duplicate_Value(Node *head)
{
  Node* temp = head;
  int count = 0;
  Node* runner = temp;
  for(;temp!=NULL;temp=temp->next)
  {
    for(;runner->next!=NULL;runner=runner->next)
    {
      if(runner->next->value == temp->value)
      {
        count++;
      }
    }
  }
  return count;

}
void print_the_linked_list(Node *head)
{
  cout << endl;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}
void insert_at_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);
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
int main()
{
  Node *head = NULL;
  cout << endl;
  while (true)
  {
    int val;
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, val);
  }
  print_the_linked_list(head);
  cout<<endl;

  int Size = countSize(head);
  cout<<"Size: "<<Size<<endl;

  int countDuplicate = duplicate_Value(head);
  if(countDuplicate)
  {
    cout<<"Duplicate Values: YES"<<endl;
  }
  else
  {
    cout<<"Duplicate Values: NO"<<endl;
  }

  return 0;
}