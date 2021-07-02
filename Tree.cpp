#include <iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
    
     node(int k)
    {
        data=k;
        left=NULL;
        right=NULL;
    }
};

void level_order_traversal(node *root)
{
      queue<node*>q;
      q.push(root);
      
      while(q.empty()==false)
      {
          node*f=q.front();
          cout<<f->data<<" ";
          q.pop();
          if(f->left!=NULL)
          q.push(f->left);
          if(f->right!=NULL)
          q.push(f->right);
      }
}
node *buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    return NULL;
    
    node *root=new node(d);
    
    root->left=buildtree();
    root->right=buildtree();
}

int main()
{
    node *root=buildtree();
    level_order_traversal(root);
    return 0;
}
