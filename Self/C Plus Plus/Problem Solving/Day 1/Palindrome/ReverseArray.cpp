#include<bits/stdc++.h>
using namespace std;
void reversedArray(int *arr,int n)
{
    int left=0;
    int right=n-1;

    while(left<right)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversedArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    

    
    return 0;
}