
//Method 1;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    cout<<"Ascending order:";

    sort(a.begin(),a.end());//Ascending order
   
    for(auto &i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // reverse(a.begin(),a.end());//Descending Order
    sort(a.begin(), a.end(), greater<int>());
    cout<<"Descending order:";
    for(auto &i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}


//Method 2

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     //here arr is the first pointer array which is arr[0] and we can write 
//     //it arr only.Through this arr it indicates the first arr[0]
//     //arr+n means the value after the last value.
//     //if array size is n=5 then it will run 0 to 4.
//     //so arr+n indicates not 4 but 5 which n's value.Means arr+n=0+5=5
//     //it take 0 to 5 because its method is to sort the values from
//     //0 to before 5 index.
//     sort(arr,arr+n);//ascending
//     sort(arr,arr+n,greater<int>());//descending
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


