#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
      this->val = val;
      this->left = NULL;
      this->right = NULL;
    }
};
Node* inputTree()
{
  int val;
  cin>>val;
  Node* root;
  queue<Node*> q;
  if(val == -1) root = NULL;
  else root = new Node(val);
  if(root) q.push(root);

  while(!q.empty())
  {
    Node* p = q.front();
    q.pop();

    int l,r;
    cin>>l>>r;
    Node* mleft;
    Node* mright;

    if(l == -1) mleft = NULL;
    else mleft = new Node(l);

    if(r == -1) mright = NULL;
    else mright = new Node(r);

    p->left = mleft;
    p->right = mright;


    if(p->left) q.push(p->left);
    if(p->right) q.push(p->right);
  }
  return root;
}
int countNodes(Node* root)
{
  int count=0;
  if(root == NULL)
  {
    // cout<<"No Tree"<<endl;
    return 0;//No Nodes
  }
  queue<Node*> q;
  q.push(root);

  while(!q.empty())
  {
    Node* p = q.front();
    q.pop();

    if(p)
    {
    count++;
    }

    if(p->left) q.push(p->left);
    if(p->right) q.push(p->right);
  }
  return count;
}
int main()
{
  Node* root = inputTree();
  cout<<countNodes(root)<<endl;
  return 0;
}