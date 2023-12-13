#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> mylist = {20, 50, 30, 10, 10, 40, 10};
  cout<<"Sort Operation(Ascending Order): "<<endl;
  mylist.sort();
  for(int val: mylist)
  {
    cout<<val<<" ";
  }
  cout<<endl<<"Sort Operation(descending Order): "<<endl;
  mylist.sort(greater<int>());
  for(int val: mylist)
  {
    cout<<val<<" ";
  }
  cout<<endl<<endl<<"Remove Duplicate Values: "<<endl;
  //First of All Sort the list
  list<int> duplicateremover={10,40,20,90,10,20,30,20,40};
  duplicateremover.sort();
  duplicateremover.unique();
  for(int val:duplicateremover)
  {
    cout<<val<<" ";
  }
  cout<<endl<<"Reverse List: "<<endl;
  list<int> rev={1,2,3,4,5,6,7,8};
  rev.reverse();
  for(int val:rev)
  {
    cout<<val<<" ";
  }
  cout<<endl;

  cout<<endl<<endl<<"Remove Operation: "<<endl;
  mylist.remove(10);
  for (int val : mylist)
  {
    cout << val << endl;
  }
  return 0;
}