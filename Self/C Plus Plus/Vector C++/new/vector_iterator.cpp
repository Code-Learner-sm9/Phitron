#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={1,2,3,4,5};
  // vector<int>:: iterator i;
  // for(i=v.begin();i<v.end();i++)
  // {
  //   cout<<*i<<" ";
  // }
  //alternative

  //we can write directly auto which automatically finds out i is a 
  //vector pointer bcz we mention it with v.begin() and v.end() where these
  //two functions are pointed out vector pointers
  for(auto i=v.begin();i<v.end();i++)
  {
    cout<<*i<<" ";
  }
  return 0;
}