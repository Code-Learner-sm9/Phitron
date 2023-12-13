#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={1,2,3,4,5};
  for(int x:v)
  {
    cout<<x<<" ";
  }
  v.insert(v.begin()+0,10);//0 index ae insert 10 korlam
  cout<<endl;
  for(int x:v)
  {
    cout<<x<<" ";
  }

  v.insert(v.begin()+2,50);//2 index ae insert 50 korlam
  cout<<endl;
  for(int x:v)
  {
    cout<<x<<" ";
  }

  //We can insert a full vector into another
  vector<int> a={1,6,7,8};
  vector<int> b={2,3,4,5};

  a.insert(a.begin()+1,b.begin(),b.end());
  cout<<endl;
  for(int x:a)
  {
    cout<<x<<" ";
  }
  return 0;
}