#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> myList;
  int value;
  while (true)
  {
    cin >> value;
    if (value == -1)
      break;
    myList.push_back(value);
  }
  myList.sort();
  myList.unique();
  for(int res: myList)
  {
    cout<<res<<" ";
  }

  return 0;
}