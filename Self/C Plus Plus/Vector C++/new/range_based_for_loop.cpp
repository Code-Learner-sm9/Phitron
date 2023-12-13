#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={1,2,3,4,5};
  //In range based for loop we can easily find out values of vector elements
  //but we can't use this technique for finding the indexex.
  //for that we have to proceed as previous normal technique.
  for(int x: a)
  {
    cout<<x<<" ";
  }
  return 0;
}