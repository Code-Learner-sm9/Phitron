#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(5);
    int size=a.size();
    cout<<size<<endl;;

    //Another Way
    int size1=sizeof(a);
    int size2=sizeof(a[0]);
    cout<<size1<<size2;

    return 0;
}