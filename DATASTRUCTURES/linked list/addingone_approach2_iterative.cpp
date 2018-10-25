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
        this->next=NULL;#include<bits/stdc++.h>
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
    void add_one()
    {
        node *current=head;
        bool addsuccessful=false;
        while(current!=NULL||addsuccessful==true)
        {
            if(current->data<9)
            {
                addsuccessful=true;
                current->data=current->data+1;
                break;
            }
            else
            {
                current->data=0;
                current=current->next;
            }
        }
        if(addsuccessful==false)
        {
            node *start=head;
            while(start->next!=NULL)
            {
                start->data=0;
                start=start->next;
            }
            start->next=new node(1);
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
    a.insert_number(8);
    a.insert_number(9);
    a.insert_number(9);
    a.displaya();
    a.rev();
    a.displaya();
    a.add_one();
    a.add_one();
    a.rev();
    a.displaya();

}


