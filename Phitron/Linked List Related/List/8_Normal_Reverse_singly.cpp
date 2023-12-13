#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;

  Node(int value)
  {
    this->value=value;
    this->next=NULL;
  }
};
void print_recursion(Node *n)
{
  if(n == NULL)
  {
    return;
  }
  cout<<n->value<<" ";
  print_recursion( n->next);

}

void print_reverse_recursion(Node *n)
{
  if(n == NULL)
  {
    return;
  }
  print_reverse_recursion(n->next);
  cout<<n->value<<" ";

}
int main()
{
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next = a;
  a->next = b;
  print_recursion(head);
  cout<<endl;
  print_reverse_recursion(head);
  return 0;
}