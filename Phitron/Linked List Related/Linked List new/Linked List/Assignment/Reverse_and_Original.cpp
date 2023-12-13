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
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    print_in_reverse(head);
    cout<<endl;
        
    print_recursion(head);


    
    
    return 0;
}