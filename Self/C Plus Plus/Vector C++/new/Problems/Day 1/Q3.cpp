//Max Element
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }

  int max=INT_MIN;

  for(int val:a)
  {
    if(val>max)
    {
      max=val;
    }
  }
  cout<<"Max Element: "<<max<<endl;

  int min=INT_MAX;

  for(int val:a)
  {
    if(val<min)
    {
      min=val;
    }
  }
  cout<<"Min Element: "<<min<<endl;
  return 0;
}