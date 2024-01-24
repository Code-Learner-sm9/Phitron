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
void levelOrder(Node* root)
{
  if(root == NULL)
  {
    cout<<"No Tree"<<endl;
    return;
  }
  queue<Node*> q;
  q.push(root);

  while(!q.empty())
  {
    Node* p = q.front();
    q.pop();

    cout<<p->val<<" ";

    if(p->left) q.push(p->left);
    if(p->right) q.push(p->right);
  }
}
int main()
{
  Node* root = inputTree();
  levelOrder(root);
  return 0;
}