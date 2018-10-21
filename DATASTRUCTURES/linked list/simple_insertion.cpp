#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class l_list
{
public:
node *head=NULL;
void insert_head(int data)
{
    if(head==NULL)
        head=new node(data);
    else
    {
        node *current=head;
        while(current->next!=NULL)
            current=current->next;
        current->next=new node(data);
    }
}
void insert_front(int data)
{
    node *temp=new node(data);
    temp->next=head;
    head=temp;
}
void insert_before(int data,int key)
{
    node *temp=new node(data);
    node *current=head;
    while(current->next->data!=key)
    {
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
}
void insert_after(int data,int key)
{
    node *temp=new node(data);
    node *current=head;
    while(current->data!=key)
    {
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
}
void display()
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


};
int main()
{
l_list a;
a.insert_head(1);
a.insert_head(2);
a.insert_head(3);
a.insert_head(4);
a.insert_head(5);
a.insert_front(19);
a.insert_before(66,4);
a.insert_after(44,5);
a.display();
}
