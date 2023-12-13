#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        // int minimumResult=numeric_limits<int>::max();
        int minimumResult=INT_MAX;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int result=arr[i]+arr[j]+j-i;
            if(result<minimumResult)
            {
                minimumResult=result;
            }
        }
    }
    cout<<minimumResult;
    }
    return 0;
}