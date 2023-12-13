#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={1,2,3,4,5,6,7,2,3,1};

  // vector<int>:: iterator s;
  // s = find(a.begin(),a.end(),3);
  //we can write it with auto which will automatically detect 
  
  auto s = find(a.begin(),a.end(),3);
  cout<<*s;//s points out a pointer so to see the value under it we dereference it
  cout<<endl;
  if(s==a.end()) cout<< "Not Found";
  else cout<<"Found";

  return 0;
}