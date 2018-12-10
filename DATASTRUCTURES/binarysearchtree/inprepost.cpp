#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
class bst
{
public:
     node* root=NULL;
     node* insertdata(node *root,int data)
     {
        if(root==NULL)
        {
            return new node(data);
        }
            else if(data<=root->data)
            {
                root->left=insertdata(root->left,data);
            }
            else
            {
                root->right=insertdata(root->right,data);
            }
      }
      void preorder(node *root)
      {
          if(root==NULL)
            return;
          cout<<root->data<<" ";
          preorder(root->left);
          preorder(root->right);

      }
      void inorder(node *root)
      {
          if(root==NULL)
            return;
          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
      }
      void postorder(node *root)
      {
          if(root==NULL)
            return;
          postorder(root->left);
          postorder(root->right);
          cout<<root->data<<" ";
      }
      void display(node *helper)
       {
       if(helper==NULL)
       return;
       display(helper->left);
       cout<<helper->data<<" ";
       display(helper->right);
       }
};
int main()
{
    bst newtree;
    newtree.root=newtree.insertdata(newtree.root,5);
    newtree.insertdata(newtree.root,3);
    newtree.insertdata(newtree.root,2);
    newtree.insertdata(newtree.root,4);
    newtree.insertdata(newtree.root,7);
    newtree.insertdata(newtree.root,6);
    newtree.insertdata(newtree.root,8);
    //newtree.display(newtree.root);
    cout<<"\ninorder\n";
    newtree.inorder(newtree.root);
    cout<<"\npreorder\n";
    newtree.preorder(newtree.root);
    cout<<"\npostorder\n";
    newtree.postorder(newtree.root);
}



