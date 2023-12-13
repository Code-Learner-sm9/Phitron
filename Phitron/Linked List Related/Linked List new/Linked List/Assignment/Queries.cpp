
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    tail = newNode;
}
void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    newNode->next = head;
    head = newNode;
}


void print_head(Node *head)
{
    
    cout << head->value;
}

void print_tail(Node *head, Node *tail)
{
    cout<<tail->value;
   
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;


    int query;
    cin >> query;
    while (query--)
    {
        int op, value;
        cin >> op >> value;

        if (op == 1)
        {
            insert_at_tail(head,tail,value);
            print_head(head);
            cout << " ";
            print_tail(head, tail);
            

        }
        else if(op == 0)
        {
            insert_at_head(head, tail, value);
            

            print_head(head);
            cout << " ";
            print_tail(head, tail);
            
            

        }
        cout << endl;
    }

    return 0;
}
