#include <bits/stdc++.h>
using namespace std;

class StackQueue
{
public:
  vector<int> l;
  void push(int x)
  {
    l.push_back(x);
  }
  void pop()
  {
    l.pop_back();
  }
  void pop_fron()
  {
    l.erase(l.begin());
  }
  int top()
  {
    return l.back();
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

void pops(vector<int> &ss)
{
  ss.erase(ss.begin());
}
void getRes(vector<int> &s, vector<int> &q)
{

  if (s.size() != q.size())
  {
    cout << "NO" << endl;
    return;
  }
  else
  {
    while (!s.empty())
    {
      if (s.front() != q.front())
      {
        cout << "NO" << endl;
        return;
      }
      pops(s);
      pops(q);
    }
    cout << "YES" << endl;
  }
}
int main()
{
  StackQueue st;
  StackQueue que;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    que.push(x);
  }
  vector<int> s;
  vector<int> q;
  while (!st.empty())
  {
    s.push_back(st.top());
    st.pop();
  }
  while (!que.empty())
  {
    q.push_back(que.front());
    que.pop_fron();
  }
  
  getRes(s, q);
  // list<int>::iterator it;
  // for(it = s.begin();it!=s.end();it++)
  // {
  //   cout<<*it<<" ";
  // }
  // cout<<endl;
  // for(it = q.begin();it!=q.end();it++)
  // {
  //   cout<<*it<<" ";
  // }
  cout << endl;

  return 0;
}



