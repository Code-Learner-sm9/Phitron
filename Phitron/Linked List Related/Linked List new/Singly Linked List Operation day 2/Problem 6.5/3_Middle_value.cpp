//Solution:https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/
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

void Middle_Point(Node *head)
{
  int count = 0;
  vector<int> v;
  while (head != NULL)
  {
    count++;
    v.push_back(head->value);
    head = head->next;
  }
  cout << count << endl;
  if (count % 2 == 0)
  {
    cout << "Elements are Even So We have printed the Middle two Values: " << endl;
    cout << v[(v.size() - 1) / 2] << endl;
    cout << v[(v.size()) / 2] << endl;
  }
  else
  {
    cout << "Elements are Odd So We have printed Only Middle Value: " << endl;
    cout << v[(v.size()) / 2] << endl;
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

  Middle_Point(head);

  return 0;
}