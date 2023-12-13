#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //getline use korle int value newar por enter press korle 
  // extra space niye ne.so we can
  //ignore it through this function
  cin.ignore();
  vector<string> s(n);
  //if we want to take string with space

  for(int i=0;i<n;i++)
  {
    getline(cin,s[i]);

  }

  for(string v:s)
  {
    cout<<v<<endl;
  }
  return 0;
}