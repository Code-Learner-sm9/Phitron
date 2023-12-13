
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
void print_linked_list(Node *n)

{
    if (n == NULL)
        return;

    cout << n->value << " ";

    print_linked_list(n->next);
}

int count(Node *head)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
   
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

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

   
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    int Size = count(head);
    Node *temp = head;

    if (Size % 2 == 0)
    {
        for (int i = 1; i < (Size / 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " " << temp->next->value;
    }
    if (Size % 2 != 0)
    {
        for (int i = 1; i < (Size / 2) + 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << endl;
    }
    

    return 0;
}

