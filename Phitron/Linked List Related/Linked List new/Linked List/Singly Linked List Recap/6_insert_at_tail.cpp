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
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *tail = d;
    print_the_linked_list(head);
    cout << endl;
    cout << "Size: " << size(head) << endl;

    int position;
    cout << "Enter Position: " << endl;
    cin >> position;

    int value;
    cout << "Enter Value: " << endl;
    cin >> value;

    if (position > size(head))
    {
        cout << "Invalid Operation." << endl;
        print_the_linked_list(head);
    }
    else if (position == 0)
    {
        insert_at_head(head, value);
        print_the_linked_list(head);
    }

    else if (position == size(head))
    {
        insert_at_tail(head, tail, value);
        print_the_linked_list(head);
    }
    else
    {
        insert_at_any_position(head, position, value);
        print_the_linked_list(head);
    }

    return 0;
}