#include<bits/stdc++.h>
using namespace std;
int main()
{
  //static array
  int b[] = {1,2,3};//basic way of declaring array

  //static array
  array<int,4> a={1,2,3,4};//array stl way

  int size=a.size();

  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<endl;
  }

  cout<<"Check First Element of Array:"<<a.front()<<endl;
  cout<<"Check Last Element of Array:"<<a.back()<<endl;

  cout<<"Element at 2nd Index:"<<a.at(2)<<endl;
  cout<<"Empty or not:"<<a.empty()<<endl;//returns boolean value

  return 0;
}