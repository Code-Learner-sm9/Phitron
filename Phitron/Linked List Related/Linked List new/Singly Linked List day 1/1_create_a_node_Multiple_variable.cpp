#include<bits/stdc++.h>
using namespace std;
//linked list ar je 2 ta part thake value and pointer,eke group bole.
//ei grp ar official name node. amra onno nam o use korte parbo.
class node{
    public:
    int val;
    node* next;
    //one linked list has two parts: value and pointer
};
int main()
{
    node a,b;
    a.val=10;
    b.val=20;

    a.next=&b;//pointer of a te b ar address thakbe
    b.next=NULL;

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    
    return 0;
}