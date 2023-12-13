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
    int original[n];
    for(int i=0;i<n;i++)
    {
        original[i]=arr[i];
    }

    cout<<"Original Array:";
    for(int i=0;i<n;i++)
    {
        cout<<original[i]<<" ";
    }

    reversedArray(arr,n);

    bool Palindrome=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=original[i])
        {
            Palindrome=false;
            break;
        }
    }
    cout<<endl;
    if(Palindrome)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}