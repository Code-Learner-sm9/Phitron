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
void delete_at_any_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cout << endl;
        cout << "Option 1: Print the Linked List" << endl;
        cout << "Option 2: Insert at Tail" << endl;
        cout << "Option 3: Insert at Head" << endl;
        cout << "Option 4: Insert at any Position" << endl;
        cout << "Option 5: Delete from any Position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;
        cout << "Your Choice: ";
        int op;
        cin >> op;

        if (op == 1)
        {
            print_the_linked_list(head);
        }
        else if (op == 2)
        {
            cout << "Enter Value: " << endl;
            while (true)
            {
                int value;
                cin >> value;
                if (value == -1)
                {
                    break;
                }
                insert_at_tail(head, tail, value);
            }
        }
        else if (op == 3)
        {
            int value;
            cout << "Enter Value: " << endl;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (op == 4)
        {
            int position, value;
            cout << "Position and Value: " << endl;
            cin >> position >> value;

            if (position > size(head))
            {
                cout << "Invalid Operation." << endl;
            }
            else if (position == 0)
            {
                insert_at_head(head, value);
            }
            else
            {
                insert_at_any_position(head, position, value);
            }
        }
        else if (op == 5)
        {
            int position;
            cout << "Enter Position: " << endl;
            cin >> position;
            if (position >= size(head))
            {
                cout << "Invalid Operation." << endl;
            }
            else if (position == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_at_any_position(head, position);
            }
        }
        else if (op == 6)
        {
            if (size(head) == 0)
            {
                cout << "Invalid Operation" << endl;
            }
            else
            {
                delete_head(head);
            }
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}