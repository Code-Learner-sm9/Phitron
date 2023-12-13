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
void print_the_linked_list(Node *head)
{
    cout << "Your Linked List: " << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void insert_at_any_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void Insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *A = new Node(20);
    Node *B = new Node(30);
    Node *C = new Node(40);
    Node *D = new Node(50);
    head->next = A;
    A->next = B;
    B->next = C;
    C->next = D;
    print_the_linked_list(head);

    cout << endl;
    int position;
    cout << "Enter Position: " << endl;
    cin >> position;

    int value;
    cout << "Enter Value: ";
    cin >> value;

    if (position > size(head))
    {
        cout << "Invalid Operation" << endl;
    }
    else if (position == 0)
    {

        Insert_at_head(head, value);
        print_the_linked_list(head);
    }
    else
    {
        
        insert_at_any_position(head, position, value);

        print_the_linked_list(head);
    }

    return 0;
}