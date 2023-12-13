#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int;
    *a=10;
    cout<<"memory address in heap memory/dynamic memory:"<<a<<endl;
    cout<<"the value that is stored in heap memory: "<<*a<<endl;
    return 0;
}