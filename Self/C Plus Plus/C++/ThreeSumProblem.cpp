#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int *arr = new int[n];
    int found=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    found=true;
                    break;
                }
            }
            if(found)
            {
                break;
            }
        }
        if(found)
            {
                break;
            }
    }
    if(found)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}