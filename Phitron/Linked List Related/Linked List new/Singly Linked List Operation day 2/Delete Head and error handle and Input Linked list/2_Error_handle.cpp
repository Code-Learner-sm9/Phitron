// linked list ar each value jetake ami boli oigula aketa node
// ai node/group ar 2 ta part akta value ar arekta address ar pointer.
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

void Insert_at_Head(Node *&head, int value)
{
  cout << endl;

  Node *newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}

void Insert_at_Tail(Node *&head, int value)
{
  cout << endl;
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    cout << "Inserted at Head" << endl;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  cout << "Inserted at Tail" << endl;
}

void Insert_at_any_Position(Node *head, int pos, int v)
{
  cout << endl;
  Node *newNode = new Node(v);
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
    if (temp == NULL)
    {
      cout << endl
           << "Invalid Position." << endl;
      return;
    }
  }
  newNode->next = temp->next;
  temp->next = newNode;
  cout << "Inserted at Position " << pos << endl;
}

void Delete_from_Position(Node *head, int position)
{
  cout << endl;
  Node *temp = head;
  for (int i = 0; i < position - 1; i++)
  {
    temp = temp->next;
    if (temp == NULL)
    {
      cout << endl
           << "Invalid Position" << endl;
      return;
    }
  }
  Node *deleteNode = temp->next;
  if (temp->next == NULL)
  {
    cout << "Invalid Position" << endl;
    return;
  }
  temp->next = temp->next->next;
  delete deleteNode;

  cout << "Deleted the Position " << position << endl;
}

void Print_the_linked_list(Node *head)
{
  cout << "Your Linked List: ";
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

void Delete_head(Node *&head)
{
  if (head == NULL)
  {
    cout << endl
         << "Invalid Operation.No Head Available in the List." << endl;
    return;
  }
  Node *temp = head;
  head = head->next;
  delete temp;
  cout << endl
       << "Deleted Head" << endl;
}
int main()
{
  Node *head = NULL;
  while (true)
  {
    cout << endl;
    // Error Handle holo amra nicher je query gula use korchi oigula te amn kichu input dile ki abnormal output or error pabo kina ta ber kora.
    // jodi error pai tahole shegulake amader handle korte hobe.

    cout << "Option 1: Insert at Head" << endl; // no error
    cout << "Option 2: Insert at Tail" << endl; // no error

    cout << "Option 3: Insert at Any Position" << endl; // error remains|jodi amra position 100 te jete chai tahole error khabe
    // jodi value 1 ta thake mane just head ase jar position 0  ar amra 1 number position ae insert korte chai jeta null tahole amra age ar 1 ghor age mane head ae jabo mane tmp ar position 0 hobe head ae
    // ar temp = temp.next holo null ke indicate korche tahole amra easily insert korte parbo.akhn ai obsthay amra jodi
    // akhn loop jodi 2 number position ae jete chai tahole amader 1 ae aste hobe but 1 to null jeta 0 ar pore ba head ar porer ghor tahole
    // 2 ae insert kora mane temp 1 ae thakbe jeta null ar temp=temp.next mane holo null ar next but null ar to kono next nai so error khabe tai
    // amra temp = null jodi pai tahole invalid return korbo karon temp == temp.next mane null ar next so invalid

    cout << "Option 4: Delete From any Position" << endl; // error remains|
    // same vabe delete korte hole amader jake delete korbo tar ager position ae jete hobe but position to available na thake tahole
    // amra error khabo mane temp = null ae jokhn jabe ar pore to amra kichu insert korte parbo na mane error khabo
    // insert at any position ar moto explaination

    // ar arekta problem holo jokhn list ae just 1 ta value thake ar porer value delete korte chai tahole abar error khabo karon
    // error ta loop ae khabe na karon loop ae khabe jodi position onek boro hoy
    // but ata khabe temp.next = temp.next.next ae mane temp.next.next ae khabe karon head ar porer value delete korte hole amare head ae jete hobe
    // mane 0 position jeta available ase ar available thaka mane loop ae eroor kahbe na loop ae eroor kokokhn kheto jokhn ar previous jekhanei jabe shekahne null
    // ase but akhn to head available ase but amra lekhlam temp.next mane head ar next jeta null equal to
    // temp.next.next mane null ar porer ghor thik tokhn ee error dibe
    // akhn temp.next = temp.next.next ar age jodi amra condition dei jodi temp.next null hoy tahole invalid return korbe
    // mane holo temp.next jodi null hoy tahole temp.next.next to null ar porer ghor jeta invalid.

    cout << "Option 5: Print the Linked List" << endl; // no error

    cout << "Option 6: Delete Head" << endl; // error remains|jodi amara akta khali linked list theke head delete korte boli tahole error khabo
    // ai problem handle korar jonno amra bole dibo jodi head null hoy tahole Invalid operation or No head or anything likhbo.

    cout << "Option 7: Terminate" << endl;

    cout << "Your Choice: ";
    int op;
    cin >> op;

    if (op == 1)
    {
      int value;
      cout << "Enter Value: " << endl;
      cin >> value;

      Insert_at_Head(head, value);
    }
    else if (op == 2)
    {
      int value;
      cout << "Enter Value: " << endl;
      cin >> value;
      Insert_at_Tail(head, value);
    }
    else if (op == 3)
    {
      int position, value;
      cout << "Enter Position: " << endl;
      cin >> position;

      cout << "Enter Value: " << endl;
      cin >> value;

      if (position == 0)
      {
        Insert_at_Head(head, value);
      }
      else
      {
        Insert_at_any_Position(head, position, value);
      }
    }
    else if (op == 4)
    {
      int position;
      cout << "Enter Position: " << endl;
      cin >> position;
      if (position == 0)
      {
        Delete_head(head);
      }
      else
      {
        Delete_from_Position(head, position);
      }
    }
    else if (op == 5)
    {
      Print_the_linked_list(head);
    }
    else if (op == 6)
    {
      Delete_head(head);
    }
    else if (op == 7)
    {
      break;
    }
  }

  return 0;
}