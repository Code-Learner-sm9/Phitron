//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include<bits/stdc++.h>
using namespace std;
bool IsPalindrome(int *arr,int n)
{
    int left=0;
    int right=n-1;

    while(left<right)
    {
        if(arr[left]!=arr[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    if(IsPalindrome(arr,n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

    

    
    return 0;
}