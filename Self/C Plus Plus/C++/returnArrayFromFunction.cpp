// //for static memory
// #include<bits/stdc++.h>
// using namespace std;
// int* fun()// we give int* because we are returning a array pointer.
// {
//     int *b; // if we put this then we will take error .
//     // int *b=new int[5];
//     for(int i=0;i<5;i++)
//     {
//         cin>>b[i];
//     }
//     return b;
// }
// int main(){
//     int *a=fun();
//     for(int i=0;i<5;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }// error.




//for dynamic memory
#include<bits/stdc++.h>
using namespace std;
int* fun()// we give int* because we are returning a array pointer.
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main(){
    int *a=fun();
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}