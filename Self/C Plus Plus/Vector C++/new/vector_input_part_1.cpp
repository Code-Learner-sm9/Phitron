#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;//here we didn't declare size at the initial statement
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }

  for(int i: v)
  {
    cout<<i<<" ";
  }
  return 0;
}