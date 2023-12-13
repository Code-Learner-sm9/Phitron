// to understand:https://phitron.io/ph453/video/ph453-7-7-printing-singly-linked-list-in-reverse
//watch this.
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node * next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void print_recursion(Node * n)
{
    if(n == NULL) return;

    cout<<n->value<<" ";

    print_recursion(n->next);
}

void print_in_reverse(Node * n)
{
    if(n == NULL) return;

    print_in_reverse(n->next);

    cout<<n->value<<" ";
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    
    head->next = a;
    a->next = b;
    b->next = c;

    cout<<"Print_the_linked_list_in_recursion_way: "<<endl;
    print_recursion(head);

    cout<<endl;

    cout<<"Print_the_linked_list_in_(reverse)_in_recursion_way: "<<endl;
    print_in_reverse(head);
    
    return 0;
}