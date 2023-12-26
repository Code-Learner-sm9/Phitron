#include<bits/stdc++.h>
using namespace std;
class MyQueue
{
  public:
    list<int> l;
    void push(int value)
    {
      l.push_back(value);
    }
    void pop()
    {
      l.pop_front();
    }
    int front()
    {
      return l.front();
    }
    int size()
    {
      return l.size();
    }
    bool empty()
    {
      return l.empty();
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