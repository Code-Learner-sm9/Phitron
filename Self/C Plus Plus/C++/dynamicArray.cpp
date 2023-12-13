#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];//int *a=stack memory, new int=heap memory.
    //we will take value from heap memory that is stored in heap memory address
    //and put them into stack memory address *a.
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout <<"Index:"<< i << " Values:" << a[i] <<" Memory Address:"<<&a[i]<< endl;
    }
    return 0;
}