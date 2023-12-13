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
    cout << endl
         << "Linked List: " << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl;
}

void insert_at_any_position(Node *head, int value, int position)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 0; i < position - 1; i++)
    {
        if(temp == NULL)
        {
            cout<<"Invalid Operation"<<endl;
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Node Inserted At Position: " << position << endl;
}

void delete_from_any_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        if(temp == NULL)
        {
            cout<<"Invalid Operation"<<endl;
            return;
        }
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    if(temp->next == NULL)
    {
        cout<<"Invalid Operation"<<endl;
        return;
    }
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "Node Deleted From Position: " << position << endl;
}

void delete_head(Node *&head)
{
    if(head == NULL)
    {
        cout<<"Invalid Operation"<<endl;
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
    cout << endl
         << "Head Deleted" << endl;
}

int main()
{
    Node *head = NULL;

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
            cout << "Enter Value: ";
            while (true)
            {
                int value;
                cin >> value;
                if (value == -1)
                {
                    break;
                }
                insert_at_tail(head, value);
            }
        }
        else if (op == 3)
        {
            int value;
            cout << "Enter Value: ";
            cin >> value;

            insert_at_head(head, value);
        }
        else if (op == 4)
        {
            int value, position;
            cout << "Enter Position: " << endl;
            cin >> position;
            if (position == 0)
            {
                int value;
                cout << "Enter Value: " << endl;
                cin >> value;
                insert_at_head(head, value);
            }
            else
            {
                cout << "Enter Value: " << endl;
                cin >> value;
                insert_at_any_position(head, value, position);
            }
        }
        else if (op == 5)
        {
            int position;
            cout << "Enter Position: " << endl;
            cin >> position;

            delete_from_any_position(head, position);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}