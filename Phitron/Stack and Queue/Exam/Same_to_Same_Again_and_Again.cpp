#include <bits/stdc++.h>
using namespace std;
void getRes(stack<int> s, queue<int> q)
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
      if (s.top() != q.front())
      {
        cout << "NO" << endl;
        return;
      }
      s.pop();
      q.pop();
    }
    cout << "YES" << endl;
  }
}
int main()
{
  stack<int> s;
  queue<int> q;

  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s.push(x);
  }
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }
  getRes(s, q);

  return 0;
}