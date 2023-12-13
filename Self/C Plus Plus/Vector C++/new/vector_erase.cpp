#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={1,2,3,4,5};
  //erase 2 
  a.erase(a.begin()+1);
  cout<<endl;
  for(int x:a)
  {
    cout<<x<<" ";
  }

  vector<int> a2={1,2,3,4,5};
  //erase 2,3,4 
  // a2.erase(a2.begin()+1,a2.begin()+4);//means delete index 1 to before index 4

  //another way
  a2.erase(a2.begin()+1,a2.end()-1);//a2.end points last index after element 5
  cout<<endl;
  for(int x:a2)
  {
    cout<<x<<" ";
  }
  return 0;
}