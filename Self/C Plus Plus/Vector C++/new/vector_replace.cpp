#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={1,2,3,4,2,1,2,3,4,5,6,7,2};
  //replce all 2 into 50
  replace(a.begin(),a.end(),2,50);
  for(int x:a)
  {
    cout<<x<< " ";
  }

  //replace all 2 except last one
  cout<<endl;
  vector<int> a2={1,2,3,4,2,1,2,3,4,5,6,7,2};
  replace(a2.begin(),a2.end()-1,2,50);
  for(int x:a2)
  {
    cout<<x<<" ";
  }
  return 0;
}