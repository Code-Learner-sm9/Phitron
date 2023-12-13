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
void Insert(Node *head,int position,int value)
{
    Node *newNode = new Node(value);
    Node * temp = head;
    for(int i=1;i<=position-1;i++)
    {
        temp = temp->next;
    }
    //Now temp = position -1 ghore ache.postion 3 hole akhn temp 2 number ghore ache.amra chaile temp ar value print kore confirm hoye nite pari. like, cout<<temp->value; //o/p:30 ashbe karon position 3 ae ache 40.
    newNode->next = temp->next;
    temp->next = newNode;
}
int size(Node*head)
{
    Node*temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    print_linked_list(head);
    int position,value;
    cout<<"Position: "<<" "<<"Value: "<<endl;
    cin>>position>>value;

    //Position jodi beshi hoy tahole amra size ber kore position invalid kina dekhte parbo. karon uporer khetre 10 theke 50 ar size holo 5 jodi position 6 dewa hoy taholei to invalid khabo tai condition dibo jodi position size theke boro hole invalid.
    int Size = size(head);
    if(position > Size)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        Insert(head,position,value);
    }
    print_linked_list(head);
    
    
    return 0;
}