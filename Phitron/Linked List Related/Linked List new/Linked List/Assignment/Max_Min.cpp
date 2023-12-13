#include <bits/stdc++.h>
using namespace std;
int Max = INT_MIN;
int Min = INT_MAX;
class Exam
{
public:
    int value;
    Exam *next;
    Exam(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert(Exam *&head, Exam *&tail, int value)
{
    Exam *newNode = new Exam(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Exam *n)
{
    if (n == NULL)
        return;

    cout << n->value << " ";

    print_list(n->next);
}

int count(Exam *head)
{
    int count = 0;
    Exam *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void Max_Min(Exam *head)
{
    if (count(head) == 1)
    {

        print_list(head);
        print_list(head);
        return;
    }
    for (Exam *i = head; i != NULL; i = i->next)
    {
        if (i->value > Max)
        {
            Max = i->value;
        }
    }

    for (Exam *i = head; i != NULL; i = i->next)
    {
        if (i->value < Min)
        {
            Min = i->value;
        }
    }
    cout<<Max<<" "<<Min;
}

int main()
{
    Exam *head = NULL;
    Exam *tail = NULL;
    int value;
    
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert(head, tail, value);
    }
    Max_Min(head);

    return 0;
}