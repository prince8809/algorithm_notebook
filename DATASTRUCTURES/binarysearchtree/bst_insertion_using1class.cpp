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
    void display(node *helper)
    {
       if(helper==NULL)
        return;
       display(helper->left);
       cout<<helper->data<<" ";
       display(helper->right);
      //  cout<<helper->data<<" ";
    }

int main()
{
    node* root=NULL;
    root=insertdata(root,5);
    insertdata(root,3);
    insertdata(root,2);
    insertdata(root,4);
    insertdata(root,7);
    insertdata(root,6);
    insertdata(root,8);

    display(root);
}

