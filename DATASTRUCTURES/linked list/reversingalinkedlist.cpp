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
    void reverse_list()
    {
        node *current=head;
        node *helper=head;
        while(current->next!=NULL)
        {
                  helper=current->next;
                  if(current->next->next!=NULL)
                  current->next=current->next->next;
                  else
                    current->next=NULL;

                  helper->next=head;
                  head=helper;
        }
    }
    void rev()
    {
        node *current=head;
        node *helper=head;
        while(current->next!=NULL)
        {
            helper=current->next;

            if(current->next->next!=NULL)
                current->next=current->next->next;
            else
               {
                   current->next=NULL;
                  // current=current->next;
               }
            helper->next=head;
            head=helper;

        }



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
    a.reverse_list();
    a.displaya();

}


