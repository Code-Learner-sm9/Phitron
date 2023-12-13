#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
};
int main()
{
    Node a,b;
    a.value=10;
    b.value=20;
    cout<<a.value<<" "<<b.value<<endl;
    
    a.next=&b;
    cout<<(*a.next).value<<" "<<b.value<<endl;
    cout<<a.next->value<<" "<<b.value<<endl;

    
    return 0;
}