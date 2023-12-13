// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
//Bubble Sort Algorithm.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *ar=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int counter=1;
    while( counter<n )
    {
        for(int i=0;i<n-counter;i++)
        {
            if(ar[i]>ar[i+1])
            {
                // int temp=ar[i];
                // ar[i]=ar[i+1];
                // ar[i+1]=temp;
                swap(ar[i],ar[i+1]);//using swap Function
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}