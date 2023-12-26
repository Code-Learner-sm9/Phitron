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
  st.push(10);
  st.push(20);
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  st.pop();

  // if(st.empty() ==true) // jodi st empty = true mane st khali tahole to top() access korte parbe na. parbe thik tokhn jokhn st te value thakbe mane. st.empty() jokhn false hobe
  if (st.empty() == false)
  {
    cout << st.top() << endl;
  }
  return 0;
}