#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;

  Node(int value)
  {
    this->value=value;
    this->next=NULL;
  }
};
int main()
{
  Node *head =new Node(10);
  Node* a= new Node(20);
  head->next=a;
  
  Node* temp=head;

  while(temp != NULL)
  {
    cout<<temp->value<<endl;
    temp=temp->next;
  }
  cout<<"Printing Second Time:"<<endl;
  temp=head;//previous while loop ae temp last linked list ae chilo oitake abr head kore dilam

  while(temp!=NULL)
  {
    cout<<temp->value<<endl;
    temp=temp->next;
  }



  
  return 0;
}