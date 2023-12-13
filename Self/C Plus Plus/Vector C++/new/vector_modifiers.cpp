#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={10,20,30,40};
  vector<int> v={1,2,3,4};
  vector<int> y={12,12,13,14,16};

  v=a;//O(1)
  a=y;//O(N)
  cout<<"v: "<<endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<"a: "<<endl;
  cout<<"Before Push and Pop Operation:"<<endl;
  for(int i=0;i<a.size();i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  a.pop_back();//removes one element from last
  a.pop_back();//removes another
  a.push_back(10);//push one element in back
  cout<<"After Operation:"<<endl;
  for(int i=0;i<a.size();i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;

  return 0;
}