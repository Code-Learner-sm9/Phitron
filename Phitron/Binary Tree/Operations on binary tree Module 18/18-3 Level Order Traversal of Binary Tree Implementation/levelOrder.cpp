//https://phitron.io/ph453/video/ph453-18-2-level-order-traversal-of-binary-tree-implementation
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
void levelOrder(Node* root)
{
  queue<Node*> q;//here the values of tree are not integer they are pointers of Node. so in this stl we have to introduce Node* not int. Each value of a tree is a Node not an integer value. So in here also if we want to create a function that returns values of tree then we have to introduce Node* function not void not int not anything like that.
  q.push(root);
  while(!q.empty())
  {
    Node* frontValue = q.front();
    q.pop();

    //The work we want to do with our value. Here we are printing front values.
    cout<<frontValue->val<<" ";

    //now if there are values in left or right of current node then we must push them into the queue. Once we pushed all values the queue will be empty. Because we are poping and also printing values at a time. And then the loop will be stopped.
    if(frontValue->left) q.push(frontValue->left);
    if(frontValue->right) q.push(frontValue->right);
  }

}
int main()
{
  Node* root = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);
  Node* d = new Node(50);
  Node* e = new Node(60);
  Node* f = new Node(70);
  Node* g = new Node(80);

  root->left = a;
  root->right = b;
  a->left = c;
  a->right = d;
  b->right = e;
  c->left = f;
  d->right = g;
  
  levelOrder(root);
  
  return 0;
}