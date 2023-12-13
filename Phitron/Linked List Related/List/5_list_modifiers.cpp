#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Replace: "<<endl;
  list<int> milist={10,20,30,40,30,30};
  for(int value: milist)
  {
    cout<<value<<" ";
  }
  cout<<endl<<"After Replace: "<<endl;
  replace(milist.begin(),milist.end(),30,100);
  for(int value: milist)
  {
    cout<<value<<" ";
  }

  cout<<endl<<"Find Operation: "<<endl;
  //find function returns poiter so derefferece it to see value.
  auto it = find(milist.begin(),milist.end(),40);
  if(it == milist.end())
  {
    cout<<"Not Found"<<endl;
    //if it is not in the list it returns last index or garbage value.
  }
  else
  {
    cout<<"Found "<<*it<<endl;
  }
  return 0;
}