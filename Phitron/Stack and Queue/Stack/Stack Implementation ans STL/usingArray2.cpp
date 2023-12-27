#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  vector<int> v;
  void push(int val)
  {
    v.push_back(val);
  }
  void pop()
  {
    v.pop_back();
  }
  int top()
  {
    return v.back();
  }
  void size()
  {
    v.size();
  }
  bool empty()
  {
    if (v.size() == 0)
      return true;
    else
      return false;
  }
};
int main()
{
  myStack st; // static array.we can use its properties using dot operator.
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    st.push(x);
  }
  while(!st.empty())//!st.empty() and st.empty==false same . amra totokhn porjonto loop chalabo jotokhn st te value thakbe.
  {
    cout << st.top() << endl;
    st.pop();
  }
  return 0;
}