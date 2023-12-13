#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;

    int target;cin>>target;

    bool found =false;

    vector<int> arr(n);

    for(auto &i: arr)
       cin>>i;
    
    //Using Bubble sort

    int counter =1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                // swap(arr[i],arr[i+1]);
                //Alternative way
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
        counter++;
    }
    //2 way of showing output
    // for(auto &i: arr)
    //    cout<<i<<" ";
    // for(const auto &i: arr)
    //    cout<<i<<" ";


    for(int i=0;i<n;i++)
    {
        int left=i+1;
        int right=n-1;
        while(left<right){
            int currentSum=arr[i]+arr[left]+arr[right];
            if(currentSum==target)
                {
            found=true;
            break;
                }
            else if(currentSum<target)
                {
            left++;
                }
            else{
            right--;
                }
    }
        }

    cout<<"Sorted Array:"; 
    for(const auto &i: arr)
       cout<<i<<" ";
    
    cout<<endl;
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
