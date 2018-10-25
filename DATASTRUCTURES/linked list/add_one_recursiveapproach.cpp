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
    int add_carry(node *start)
    {
        if(start==NULL)
            return 1;
        int res=start->data+add_carry(start->next);
        start->data=res%10;
        return res/10;

    }
    void add_one()
    {
        int carry=add_carry(head);
        if(carry)
        {
            node *temp=head;
            node *newnode=new node(1);
            newnode->next=temp;
            head=newnode;

        }
    }
    void displaya()
    {
        cout<<"\n display \n";
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
    a.insert_number(9);
    a.insert_number(9);
    a.insert_number(9);
    a.insert_number(9);
    a.displaya();
 //   a.rev();
 a.add_one();
   // a.displaya();
   // a.add_one();
   // a.add_one();
   // a.rev();
    a.displaya();

}


