#include <bits/stdc++.h>
using namespace std;

bool getRes(string &s)
{
  stack<char> st;
  for (char c : s)
  {
    if (st.empty())
    {
      st.push(c);
    }
    else if ((c == 'A' && st.top() == 'B'))
    {
      st.pop();
    }
    else if((c == 'B' && st.top() == 'A'))
    {
      st.pop();
    }
    else
    {
      st.push(c);
    }
  }
  return st.empty(); 
}

int main()
{
  int n;
  cin >> n;
  string str;
  while (n--)
  {
    cin >> str;
    if (getRes(str))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
