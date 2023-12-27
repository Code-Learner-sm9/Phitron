#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  list<int> a;
  void push(int x)
  {
    a.push_back(x);
  }
  void pop()
  {
    a.pop_back();
  }
  int top()
  {
    return a.back();
  }
  int size()
  {
    return a.size();
  }
  bool empty()
  {
    return a.empty();
  }
};
int main()
{
  myStack st;
  myStack st1;
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    st1.push(x);
  }
  

  int flag = 0;
  if (st.size() != st1.size())
  {
    cout << "Not Same, No." << endl;
  }
  else
  {
    while (!st.empty())
    {
      int k = st.top();
      int l = st1.top();

      // cout << k << " " << l << endl;
      if (k != l)
      {
        // cout << k << " " << l << endl;

        flag = 1;
        break;
      }
      st.pop();
      st1.pop();
    }
    if (flag == 0)
    {
      cout << "Same, Yes." << endl;
    }
    else
      cout << "Not Same, No." << endl;
  }

  return 0;
}