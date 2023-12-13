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

void Insert_at_Tail(Node * & head,int value)
{
  cout<<endl;
  Node * newNode = new Node(value);
  if(head == NULL)
  {
    head = newNode;
    cout<<"Inserted at Head"<<endl;
    return;
  }

  Node * temp = head;

  while(temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;

  cout<<"Inserted at Tail"<<endl;

}

void Print_Linked_list(Node* head)
{
  cout<<endl;
  cout<<"Your Linked List:"<<endl;
  Node * temp = head;
  while(temp != NULL)
  {
    cout<<temp->value<<" ";
    temp = temp->next;
  }

}

void Insert_at_any_Position(Node*head, int position, int value)
{
  Node * newNode = new Node(value);
  Node* temp = head;
  for(int i=0;i<position-1;i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  cout<<"Inserted at Position: "<<position<<endl;
}

void Insert_at_Head(Node * &head, int value)
//Head ke update korbo tai direfferece kore nilam
{
  Node * newNode = new Node(value);
  newNode->next = head;
  //head ae jodi new value connect korte chai tahole direct head == newNode bolle head ae akhn jei value ase oita vanish hoye jabe. 
  //amra ager operation gulay head == newNode korechilam karon head khali chilo tai newNode assign directly korle problem hoto na. but akhane amra 
  //amn jaygay newNode connect korbo jekhane age thekei akta value ache.tai age newNode ar sathe akhner je head value ase oitake connect kore nibo
  //mane newNode ar next aei thakbe head ar present value.
  head = newNode;
  //jeheto newNode ke head ar present value ar sathe connect kore dilam tahole head equal to newNode bollei hobe 

  cout<<endl<<"Inserted at Head"<<endl;

}
int main()
{
  Node *head = NULL;
  while(true)
  {
    cout<<endl;
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: Print the Linked List"<<endl;
    cout<<"Option 3: Insert at any Position"<<endl;
    cout<<"Option 4: Insert at Head"<<endl;
    cout<<"Option 5: Terminate"<<endl;

    cout<<"Your choice: ";
    int op;
    cin>>op;

    if(op == 1)
    {
      cout<<"Enter Value: "<<endl;
      int value;
      cin>>value;

      Insert_at_Tail(head,value);
    }

    else if(op == 2)
    {
      Print_Linked_list(head);
    }

    else if(op == 3)
    {
      int position,value;
      cout<<"Enter Position: "<<endl;
      cin>>position;

      cout<<"Enter Value: "<<endl;
      cin>>value;
      if(position == 0)
      // positiion 0 mane holo first value ke point kora hoyeche jeta holo head
      {
        Insert_at_Head(head,value);
      }
      else
      {
      Insert_at_any_Position(head,position,value);
      }
    }

    else if(op == 4)
    {
      int value;
      cout<<"Enter value: "<<endl;
      cin>>value;
      Insert_at_Head(head,value);
    }

    else if(op == 5)
    {
      break;
    }
  }
  return 0;
}