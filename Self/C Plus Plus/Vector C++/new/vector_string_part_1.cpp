#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<string> s;
  //If we want to take sigle strings without space
  for(int i=0;i<n;i++)
  {
    string x;
    cin>>x;
    s.push_back(x);
  }

  // for(int i=0;i<n;i++)
  // {
  //   cout<<s[i]<<" ";
  // }

  //alternative
  // for(int i=0;i<s.size();i++)
  // {
  //   cout<<s[i]<<" ";
  // }

  //alternative
  for(string value:s)
  {
    cout<<value<<" ";
  }
  return 0;
}