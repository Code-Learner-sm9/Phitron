//https://chat.openai.com/share/d1aec483-acb1-45c6-8dd1-68bc0ec3c37a
#include <bits/stdc++.h>
using namespace std;

string getRes(string &str, int n)
{
  stack<char> st;
  char p = 'P', y = 'Y', c = 'C';

  for (char ch : str)
  {
    if (!st.empty())
    {
      if ((ch == 'B' && st.top() == 'R') || (ch == 'R' && st.top() == 'B'))
      {
        st.pop();
        st.push(p);
      }
      else if ((ch == 'G' && st.top() == 'R') || (ch == 'R' && st.top() == 'G'))
      {
        st.pop();
        st.push(y);
      }
      else if ((ch == 'B' && st.top() == 'G') || (ch == 'G' && st.top() == 'B'))
      {
        st.pop();
        st.push(c);
      }
      else if (ch == st.top())
      {
        st.pop(); 
      }
      else
      {
        st.push(ch);
      }
    }
    else
    {
      st.push(ch);
    }
  }

  string cpr;
  while (!st.empty())
  {
    char k = st.top();
    cpr.push_back(k);
    st.pop();
  }

  reverse(cpr.begin(), cpr.end()); 

// string result;
// for (char color : cpr) {
//     if (!result.empty() && color == result.back()) {
        
//         result.pop_back();
//     } else {
//         result.push_back(color);
//     }
// }
//   return result;
// }
//alternative;
  string result;
  for (int i = 0; i < cpr.size(); i++)
  {
    if (i == cpr.size() - 1 || cpr[i] != cpr[i + 1])
    {
      result.push_back(cpr[i]);
    }
    else
    {
      i++;
    }
  }
  return result;
}


int main()
{
  int n, m;
  cin >> m;
  string s;
  char ch;

  while (m--)
  {
    s = "";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> ch;
      s.push_back(ch);
    }

    string res = getRes(s, n);
    cout << res <<endl;
  }

  return 0;
}
