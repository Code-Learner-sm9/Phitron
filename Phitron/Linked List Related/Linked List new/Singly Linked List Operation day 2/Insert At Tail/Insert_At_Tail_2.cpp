// Insert at tail bolte akta linked list ar head jeta first group ke bujahy ar akta
// linked list ae onek gula group thakte pare so last group take tail bujhay
// Insert at tail bolte tail ar pore akta new value assign korte hole ki korte hobe
// amra temp!=NULL dara bujaise tamp jotokhon na NULL hobe tar ag porjonto value print hobe
// mane tail ar pore ghor ke point kora hoiselo coz last linked list jeta holo tail oitar adress
// to NULL jeta next ghor ke point korto but NUll howar jonno kono group nai.

// ar akhane amra temp->next!=NULL porjonto nibo mane hocche amr je new value nilam oitake
// to tail ae join korate hobe kintu amra jodi temp!= NULL nei jeta tail ar porer ghor oita
// to kono adress nai so oita kora jabe na..amn vabe likhte hobe jeta tail ar NULL ghor takei
// point kore mane oi ghor tatei to amra new group ar adres ta likhbo .

// arekta operation atar sathei pore je jodi amader linked list tai jodi khali thake tahole to
// NULL shorotei mane start tekei head dhorbo abr oitakei tail dhorbo
// ar por oikhane while(head==NULL) hole head aei new value ta assign kore debo
// akhane akta jamela ase ager bar to amra value assign korse kintu akhn to adress e nai ager bar
// akta address chilo oitay value disi.
// akhn shorotei null mane kono adres nai .tahole akhane kintu head = newValue; likhle hobe na
// amader ke funtion ae pointer dewar time dereference kore pathate hobe jeta amra ai tutorial ar
// e reference of a pointer ae dekhse.
// tokhn void funtion(int * &head) dite hobe noile kaj korbe na
// ar first operation ar time amader void funtion(int *head,int value) dite hobe je value amra
// assign korbo ar address to ditei hobe ..coz amra jani akta group new add kora mane akhane
//  2 ta jinish add kora akta vlaue ar arekta pointer of address.


//in this code we prefer that the list is empty
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
void Insert_at_tail(Node *&head, int v)
// head ar pointer ar value pass korechi karon head chara amra list ar
// group value access korte parbo na suppose tmp operation chalano jabe na
// ar value v diye new node insert korbo
{
  Node *newNode = new Node(v);

  if (head == NULL)
  {
    // head = newNode;
    // avabe likhle head a newNode inser hobe na karon
    // head k derefference kore tarpor value change korate hobe jemon ta amra reference at a pointer
    // ae dekhse
    // niche tmp->next = newNode update hobe karon ata dara amra direfference korei next ae newNode inser korchi
    // head = newNode ee kaj korbe amader k parameter a giye Node * & head dite hobe

    head = newNode;

    // ai operation ar pore mane head jodi NULL thake tahole newNode insert kore return korbo
    // jodi na kori tahole nicher operation gulay jabe jetar kaj holo age thekei list ase or head ase oitar
    // last ar giye newNode insert kora jeta head NULL thakle to proyojon nei.
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
    // ai operation shesh ae tmp last node a thakbe
  }
  // akhn amra tmp ar last node a ache..
  tmp->next = newNode;
}

void print_linked_list(Node *head)
// linked list ar jonno function likhle alada vabe parameter or argument a mainly head takei
// pass korate hoy. linked list ar head chara onno ar kono main hisebe kaj kore na
// bad baki amra previous function ar moto newNode create korte chaile value v dibo ai rki.
{
  cout << "Your Linked List: ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->value << " ";
    tmp = tmp->next;
  }
  cout<<endl;
}
int main()
{
  Node *head = NULL;
  while (true)
  //ami jodi akta akta kore value insert na kore onekgula korte chai
  {
    cout << "Option 1: Insert at Tail: " << endl;
    cout << "Option 2: Print Linked List: "<< endl;
    cout << "Option 3: Terminate: " << endl;
    int op;
    cin >> op;
    if (op == 1)//avabe dile only akta value niye operation stop hoye jabe tai while(true) loop use kora
    {
      cout << "Please enter value: ";
      int v;
      cin >> v;
      Insert_at_tail(head, v);
    }
    else if(op == 2)
    {
    print_linked_list(head);
    }
    else if(op == 3)
    {
      //while(true) ar infinite loop theke ber howar jonno break korlam
      break;
    }
  }
  return 0;
}