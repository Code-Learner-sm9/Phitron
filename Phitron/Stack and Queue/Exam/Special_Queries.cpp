#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  queue<string> que;
  while(q--)
  {
    int value;
    cin>>value;
    if(value==0)
    {
      string x;
      cin>>x;
      que.push(x);
    }
    else if(value==1)
    {
      if(que.empty())
      {
        cout<<"Invalid"<<endl;
      }
      else
      {
        cout<<que.front()<<endl;
        que.pop();
      }
    }

  }

  return 0;
}