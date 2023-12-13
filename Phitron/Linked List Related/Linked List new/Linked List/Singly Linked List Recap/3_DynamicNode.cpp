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
void print_linked_list(Node * head)
//ami jodi head update kortam tahole Node *&head likhte hoto parameter ae.
{
    Node*temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = NULL; class Node ae by default shobar next ae NULL dewa ache tai alada kore likhte hobe na.

    print_linked_list(head);
    
    
    return 0;
}