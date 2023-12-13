#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node * next;
    Node(int v)
    {
        value = v;//if upper two variables are not different then we can use this way. if two variables are same then we have to use this operator. like, this->value = value means this object value has the parameter value and this->next = NULL and this next object has NULL.
        next = NULL;
    }
};
int main()
{
    Node * a = new Node(10);
    Node * b = new Node(20);

    //a and b hocce pointer amra direct a.val or b.val diye value pabo na.atake dereference kore value pete hobe.
    cout<<(*a).value<<" "<<(*b).value<<endl;
    cout<<a->value<<" "<<b->value<<endl;

    a->next = b;
    cout<<a->value<<" "<<a->next->value<<endl;
    
    return 0;
}