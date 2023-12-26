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
class MyQueue{
  public:
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;

    void push(int value)
    {
      sz++;
      Node* newNode = new Node(value);
      if(head == NULL)
      {
        head = newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = tail->next;

    }
    void pop()
    {
      sz--;
      Node* deleteNode = head;
      head = head->next;
      delete deleteNode;
      //jodi value aktai thake ar oita delete kore dei
      if(head == NULL)
      {
        tail = NULL;
      }

    }
    int front()
    {
      return head->value;
    }
    int size()
    {
      return sz;
    }
    bool empty()
    {
      if(sz == 0) return true;
      else return false;
    }
};
int main()
{
  MyQueue q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    q.push(x);
  }
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
  
  return 0;
}