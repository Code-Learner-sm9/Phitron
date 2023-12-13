#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);

    //Normal Way to show output
    for(int i=0;i<a.size();i++)
    {
        cout<<"Normal Way to show output:"<<a[i]<<endl;
    }

    //using iterator
    vector<int>:: iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<"using iterator:"<<*it<<endl;
    }
    
    //Easy Way
    for(auto i:a)
    {
        cout<<"Easy Way:"<<i<<endl;
    }

    a.pop_back();
    a.pop_back();

    for(auto i:a)
    {
        cout<<"Element of a Now:"<<i<<endl;
    }

    //I want 3 elements which num is same suppose 50

    vector<int> a2(3,50);
    for(auto i:a2)
    {
        cout<<"Same Element of a2:"<<i<<endl;
    }

    //I can swap a and a2 arrays elements with each other
    swap(a,a2);
    for(auto i:a)
    {
        cout<<"Elements of a now:"<<i<<endl;
    }
    for(auto i:a2)
    {
        cout<<"Elements of a2 now:"<<i<<endl;
    }

    //sort
    cout<<"Ascending Order: ";
    cout<<"Input:";
    vector<int> a3(5);
    for(auto &i:a3)
    {
        cin>>i;
    }
    sort(a3.begin(),a3.end());
    for(auto &i:a3)
    {
        cout<<"Sorted Array:"<<i<<endl;
    }
    cout<<"Descending order:";
    cout<<"Input:";
    vector<int> a4(5);
    for(auto &i:a4)
    {
        cin>>i;
    }
    sort(a4.begin(),a4.end(),greater<int>());
    for(auto &i:a4)
    {
        cout<<"Sorted Array:"<<i<<endl;
    }
    return 0;
}