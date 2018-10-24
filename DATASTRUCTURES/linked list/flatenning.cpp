#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *right;
};
node* newnode(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
    temp->right=NULL;
    return temp;
}
void display(node *current)
{
    node *temp=current;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* merge(node *a,node *b)
{
    node *answer;
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    if(a->data<b->data)
    {
        answer=a;
        answer->next=merge(a->next,b);
    }
    else
    {
        answer=b;
        answer->next=merge(a,b->next);
    }
    return answer;
}
node* flatten(node *our)
{
  if(our==NULL)
    return our;
    if(our->next==NULL)
        return our;

  return merge(our,flatten(our->right));

}
int main()
{
    node *head=NULL;
    head=newnode(5);
    head->next=newnode(7);
    head->next->next=newnode(8);
    head->next->next->next=newnode(10);
    head->right=newnode(10);
    head->right->next=newnode(20);
    head->right->right=newnode(19);
    head->right->right->next=newnode(22);
    head->right->right->next->next=newnode(50);

    display(head);
    display(head->right);
    display(head->right->right);

    flatten(head);
    display(head);

}
