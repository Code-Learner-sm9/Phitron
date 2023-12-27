// Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> st;
  queue<int> qu;
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    st.push(x);
  }
  cin>>m;
  for(int i=0;i<m;i++)
  {
    int x;
    cin>>x;
    qu.push(x);
  }
  bool res = true;
  if(st.size() != qu.size())
  {
    cout<<"Not Same.";
  }
  else
  {
    while(!st.empty())
    {
      int k = st.top(); int l = qu.front();
      if(k != l)
      {
        res = false;
        break;
      }
      st.pop(); qu.pop();
    }
    if(res)
    {
      cout<<"Same, Yes."<<endl;
    }
    else cout<<"Not Same."<<endl;
  }
  return 0;
}