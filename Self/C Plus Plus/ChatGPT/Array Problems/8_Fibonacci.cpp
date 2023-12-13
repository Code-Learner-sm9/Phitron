#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int first=0;
    int second=1;
    int result=0;
    cout<<first<<" "<<second<<" ";
    for(int i=2;i<n;i++)
    {
      result=first+second;

      first=second;
      second=result;

      cout<<result<<" ";
    }
    return 0;
}