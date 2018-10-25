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
    void insert_number(int data)
    {
    if(head==NULL)
    {
        head=new node(data);
    }
    else
    {
        node *current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        node *tmp=new node(data);
        current->next=tmp;

    }
    }
    void rev()
    {
       node *current=head;
       node *prev=NULL,*next=NULL;
       while(current!=NULL)
       {
           next=current->next;
           current->next=prev;
           prev=current;
           current=next;

       }
       head=prev;


    }
    void displaya()
    {
        cout<<"display";
        node *current=head;
        while(current!=NULL)
        {
            cout<<current->data<<" ";

           current=current->next;
        }

    }
};
int main()
{
    l_list a;
    a.insert_number(1);
    a.insert_number(2);
    a.insert_number(3);
    a.insert_number(4);
    a.displaya();
    a.rev();
    a.displaya();

}


