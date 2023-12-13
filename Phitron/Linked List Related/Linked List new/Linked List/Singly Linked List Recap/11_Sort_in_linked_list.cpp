//Watch: https://phitron.io/ph453/video/ph453-7-8-sort-singly-linked-list
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


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter Value: " << endl;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        //nicher part toko extra function niye korle value ashe na.
        //tai akhanei likhte hobe jodi recursion use kori noyto extra function diye kaj kore.

        Node * newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    cout<<"Linked List: "<<endl;

    print_linked_list(head);

    // Normal Array Sort
    //  for(int i=0;i<n-1;i++)
    //  {
    //      for(int j=i+1;j<n;j++)
    //      {
    //          if(array[i]>array[j])
    //          {
    //              swap(array[i],array[j]);
    //          }
    //      }
    //  }

    // Linked List Version
    cout<<endl;
    //input value 10 20 30 40 nilam tahole condition ar khetre i hobe n-1 ar ag porjonto
    // mane 4-1=3 ar age mane 2 porjonto jar value 30 jeheto index 0 theke start hoy linked list ar khetreo. tahole amra jodi 30 porjonto jete chai amader ke i ar man jokhon 40 tokhn thamte hobe mane i.next != NULL ar j ar jonno 40 porjonto mane j!= NULL.
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            cout << "Comparison Value: " << i->value << " " << j->value << endl;
        }
        cout<<endl;
    }


    //Sort in Ascending Order
    cout<<endl;
     for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->value > j->value)
        {
            swap(i->value, j->value);
        }
        }
        
    }
    cout<<"Ascending Order: "<<endl;
    print_linked_list(head);

     //Sort in descending Order
     cout<<endl;
     for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->value < j->value)
        {
            swap(i->value, j->value);
        }
        }
        
    }
    cout<<"Descending Order: "<<endl;
    print_linked_list(head);

    return 0;
}