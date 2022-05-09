
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
     node* insertdata(node *curr,int data)
     {
        if(curr==NULL)
        {
            return new node(data);
        }
        else
        {
            if(data<=curr->data)
            {
                curr->left=insertdata(curr->left,data);
            }
            else
            {
                curr->right=insertdata(curr->right,data);
            }
            return curr;
        }
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
    newtree.display(newtree.root);
}
