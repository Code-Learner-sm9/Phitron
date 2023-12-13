#include <bits/stdc++.h>
using namespace std;
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

bool equality(Exam * &head1, Exam* & head2)
{
    while(head1 != NULL && head2!= NULL)
    {
        if(head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main()
{
    Exam *head1 = NULL;
    Exam *tail1 = NULL;
    int value;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        insert(head1,tail1,value);        
    }
    int first = count(head1);
    
    // print_list(head1);

    Exam * head2 = NULL;
    Exam * tail2 = NULL;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        insert(head2,tail2,value);        
    }
    // print_list(head2);

    int second = count(head2);
    if(first != second)
    {
        cout<<"NO";
    }
    else
    {
        if(equality(head1,head2))
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
    }
    return 0;
}