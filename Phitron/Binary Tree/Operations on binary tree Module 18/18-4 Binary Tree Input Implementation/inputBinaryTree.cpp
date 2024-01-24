//We have to input binary tree and print them. We can print them in four ways.1)PreOrder/InOrder/PostOrder 2)Level Order. We have shown here the level order printing.
//First We have to create a function that takes input values for the tree and return them. As we mentioned before, values of tree are not int or anything they are pointer of a Node. So the keyDate Type of function will be same as our class name. In our case, that is Node* . And then we will paste the Node values to a Node variable and will print the level order like we have done before.
//https://phitron.io/ph453/video/ph453-18-4-binary-tree-input-implementation
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
Node* takeInput()
{
  int val;
  cin>>val;
  Node* root;
  if(val == -1) root = NULL;
  else root = new Node(val);
  queue<Node*> q;
  if(root) q.push(root);
  while(!q.empty())
  {
    Node* p = q.front();
    q.pop();

    //p ar left, right children add korte hobe.
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
    cout<<"NO Tree"<<endl;
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
  Node* root = takeInput();
  levelOrder(root);
  return 0;
}