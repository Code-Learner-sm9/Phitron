//dynamic Data Delete


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *a=new int;
//     cin>>*a;
//     cout<<*a<<endl;
//     delete a;//int a delete hoye jabe..linux a full dlt hoye jay.
//     //but windows garbage value rekhe de
//     cout<<*a;
//     return 0;
// }

//dynamic array Increase size and delete

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int *b=new int[7];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }

    //delete array use delete[] for array. for normal data just use: delete a
    delete[] a;//a is the pointer name of *a.
    //now let's check.but we know windows will give garbage values instead of deleting it from memory.
    // but in linux it will completely delete
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}