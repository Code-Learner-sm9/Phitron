// https://phitron.io/ph453/video/ph453-10-8-detect-cycle-in-singly-linked-list
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
// int size(Node * head)
// {
//   Node* temp = head;
//   int count;
//   while(temp != NULL)
//   {
//     count++;
//     temp = temp->next;
//   }
//   return count;
// }
void print(Node * n)
{
  if(n == NULL)
  {
    return;
  }
  cout<<n->value<<endl;
  print(n->next);
}
int main()
{
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);

  //not a cyle its straight forward
  head->next = a;
  a->next =b;
  b->next = c;
  
  //cycle
  // head->next = a;
  // a->next =b;
  // b->next = c;
  // c->next = a;
  
  bool flag = false;
  Node* slow = head;
  Node* fast = head;
  while(fast!= NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast= fast->next->next;
    if(slow == fast)
    {
      flag = true;
      break;
    }
  }

  if(flag)
  {
    cout<<"Cycle Detected."<<endl;
  }
  else{
    cout<<"Not a Cycle."<<endl;
  }
  return 0;
}