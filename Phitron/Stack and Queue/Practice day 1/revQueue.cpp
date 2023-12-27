//Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

#include<bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> que;
  stack<int> st;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    que.push(x);
  }
  
  while(!que.empty())
  {
    int k = que.front();
    st.push(k);
    que.pop();
  }
  stack<int> newSt;
  while(!st.empty())
  {
    newSt.push(st.top());
    cout<<newSt.top()<<" ";
    st.pop();
  }
  
  
  return 0;
}