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
    Node * head = NULL;
    Node * tail = NULL;
    int value;
    cout<<"Enter Value: "<<endl;
    while(true)
    {
        cin>>value;
        if(value == -1) break;
        Node * newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        } 
    }

    cout<<"Print_the_linked_list_in_recursion_way: "<<endl;
    print_recursion(head);

    cout<<endl;

    cout<<"Print_the_linked_list_in_(reverse)_in_recursion_way: "<<endl;
    print_in_reverse(head);
    
    return 0;
}