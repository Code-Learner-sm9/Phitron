#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  char n[101];
  while(t--)
  {
    cin>>n;
    if((int)n%2==0)
    {
      cout<<"even"<<endl;
    }
    else cout<<"odd"<<endl;
  }
  return 0;
}