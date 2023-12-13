#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int m;
    cin>>m;
    vector<int> ar(m);
    for(int i=0;i<m;i++)
    {
      cin>>ar[i];
    }

    int index;
    cin>>index;

    arr.insert(arr.begin() + index, ar.begin(),ar.end());

    for(int i=0;i<arr.size();i++)
    {
      cout<<arr[i]<<" ";
    }

    return 0;
}