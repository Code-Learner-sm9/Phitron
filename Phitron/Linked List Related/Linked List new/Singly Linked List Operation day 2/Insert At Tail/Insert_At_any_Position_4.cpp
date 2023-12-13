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
void Insert_at_Tail(Node *&head, int v)
{
  Node *newNode = new Node(v);
  if (head == NULL)
  {
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl
         << endl;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  tmp->next = newNode;
  cout << endl
       << "Inserted at tail" << endl
       << endl;
}

void print_linked_list(Node *head)
{
  
  cout << "Your Linked List: "<<" ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->value << endl;
    tmp = tmp->next;
  }
  cout << endl;
}

void insert_at_any_Position(Node *head, int pos, int v)
{
  Node *newNode = new Node(v);
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  // pos -1 mane ami position 2 ae insert korte chaile first amk 1 ae jete hobe
  //  jodi 2 number ae insert korai tahole 1 a jabo then new node take first aei prev 2 number node ar pore
  // je value chilo tar sathe connect korbo arpor 1 number ae je ase tar sathe newnode take connect korbo..first aei 1 ar sathe connect na korar karon
  //  holo jodi ata kori tahole amra to 1 ar sathe 2 je connect chilo oita delete korei new node take connect korbo tokhn 2 theke shob delete hoye jabe tai age
  // amra new node ke 2 ar sathe connect kore then 1 ar sathe new node take connect korbo
  {
    tmp = tmp->next;
  }
  // uprer operation complete howar por tmp 1 number position a thakbe
  newNode->next = tmp->next;
  // akane tmp ache 1 number position ae uporer operation ar por.ar tmp->next holo 2 number position.
  // mane newnode ke 2 number positio ar sathe connect korlam noyto 2 ar por shob delete hoye jabe
  tmp->next = newNode;
  // akhane tmp->next kintu 2 rokom tmp = tmp->next jokhn bola hoise ar mane tmp 1 number position ae ase ar arpore regular value hisebe bakigula ase amra newnode akhono
  // insert kori nai. jokhn likhlam newNode->next = tmp-> next mane holo tmp->next a ke ase obviously 2 number ase so oigular age newNode connect korbo pore na kintu age korbo
  // akhn kora hoile 1 ar por to akhn ar previous regular je 2 chilo ta to nai newNode ase akhn oitar sathe to amk connect korte hobe.
  // tahole tmp->next = newNode lekha mane holo amra 1 number position ae je newNOde ase jetake akto age amra 2 ar sahte connect korlam oitake 1 ar next ae connect korte hobe
  // tai ai operation kora.

  cout << endl
       << endl
       << "Inserted at Position: " << pos << endl
       << endl
       << endl;
}
int main()
{
  Node *head = NULL; // with this statement we declared that the list is empty
  // Node *head = new Node(10);//with this statement we declared that the list has one value 10 and its not empty
  while (true)
  {
    cout << "Option 1: Insert at Tail" << endl;
    cout << "Option 2: Print the Linked List" << endl;
    cout << "Option 3: Insert at any Position" << endl;
    cout << "Option 4: Terminate" << endl;

    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "Insert your Value: ";
      int v;
      cin >> v;
      Insert_at_Tail(head, v);
    }
    else if (op == 2)
    {
      print_linked_list(head);
    }
    else if (op == 3)
    {
      int position, value;
      cout << "Enter Position: " << endl;
      cin >> position;

      cout << "Enter Value: " << endl;
      cin >> value;

      // head position 0 , then 1,2,3,....
      // amra ajker ai operation diye head or 0 number position a kichu insert korte parbo na
      // karon amader ke ager 0 ar age je ase tar sathe connect korte hobe but oita to nai.
      // oita next tutorial ae ashbe.
      // akhane amra 1 position dewa mane holo head ar porer ghor bujhay.

      insert_at_any_Position(head, position, value);
    }
    else if (op == 4)
    {
      break;
    }
  }

  return 0;
}