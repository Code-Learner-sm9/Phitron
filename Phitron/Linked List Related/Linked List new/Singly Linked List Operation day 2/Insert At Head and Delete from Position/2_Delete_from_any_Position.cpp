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
  cout<<"Your Linked List: "<<" ";
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
  // for(int i=0;i<position-1;i++)same
  for(int i=1;i<=position-1;i++)
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

void delete_from_Position(Node *head, int position)
{
  Node * temp = head;
  for(int i=0;i<position-1;i++)
  // for(int i=1;i<=position-1;i++) same
  {
    temp = temp->next;
  }
  Node * deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;

  //akta list theke kono value delete korte chaile amader 3 ta operation korte hobe. first amader je position delete korbo tar ager ghor ae giye mane 2 delte korbo 1 ae giye ar sathe 2 ar porer value 3 ke 1 ar sathe connect korte hobe.
  //jodi 1 ar sathe 3 ke connect na korei 2 ke delete kore dei tahole 2 soho baki shob delete hoye jabe. tai amra pos-1 kore temp = temp-> next dilam mane temp akhn 1 number ae ase jodi amra 2 num value delete korte chai. 
  //akhn Node *deleteNode = temp->next likhlam mane amra je value take delete korbo shetake akta variable ae store kore rakhlam akhne variable na ata object. karon amra jodi 1 ar sathe 3 ke connect kori tahole 2 jeta 3 ar sathe previously connect chilo
  //oitar sathe to akhn karo connection nai mane oitake amra ar delete korte parbo na garbage value hisebe pore thakbe. tai oitake akta jaygay store kore rakhlam jate hariye na jay. deleteNode = temp->next likhlam karon temp holo 1 num position ae ase tai 
  //2 number position obviously temp ar next aei ache.tai ata likha. akhn temp->next = temp->next->next likhlam karon 1 ar sathe amara 3 ke connect korbo..temp ar sathe connect kora mane ki temp ar next ar sahtei to connect kora tai na..jodi temp=temp->next->next likhi
  //tahole to bujay value assign korchi ashole to ta noy. address connect korbo kivabe amra temp.next diyei to mane next ke update korte hobe. tahole temp holo 1 num position ar temp ar next aei 3 ke connect korbo. 3 ache kotha.. 3 ase 2 ar pore.tahole 2 ke petam amra kivabe
  //temp->next kore tai na temp->next jodi 2 hoy tahole temp->next->next to 3 ee hobe.
  //at last amra 2 num position ke jekhane store kore rakhselam oita delte kore dibo  
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
    cout<<"Option 5: Delete from any Position"<<endl;
    cout<<"Option 6: Terminate"<<endl;

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
      int position;
      cout<<"Enter Position: "<<endl;
      cin>>position;
      delete_from_Position(head,position);
    }
    else if(op == 6)
    {
      break;
    }
  }
  return 0;
}