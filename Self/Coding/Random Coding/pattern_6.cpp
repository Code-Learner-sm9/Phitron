#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=2*n-i;j>=i;j--)
    {
      cout<<"*";
    }
    cout<<endl;
    for(int k=1;k<=i;k++)
    {
      cout<<" ";
    }
  }
  return 0;
}