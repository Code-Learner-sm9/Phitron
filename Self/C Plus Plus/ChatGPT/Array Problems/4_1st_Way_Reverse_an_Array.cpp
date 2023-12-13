#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    cout<<"Show Output: ";
    for(int i=0;i<n/2;i++)// i<n dile 5 bar count hobe jeta unnecessary
    //n/2 dile n=6 ar jonno 3 bar swap korlei reverse value ashe jay.
    {
      // swap(arr[i],arr[n-i-1]);

      //Alternative of Swapping Function

      int temp=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
    }

    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}