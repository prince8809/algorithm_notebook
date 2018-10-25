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
    int temp=0;
    node *current=NULL;
    node *newhead=NULL;
    while(data>0)
    {
        temp=data%10;
        if(head==NULL)
        {
            //cout<<"null";
            head=new node(temp);
            current=head;
        }
        else
        {
            /*insert backwards*/
          /*  current->next=new node(temp);
            current=current->next;*/
            /*insert forward*/
            if(newhead==NULL)
                {
                newhead=new node(temp);
                newhead->next=current;
                }
            else
            {
                node *nr=new node(temp);
                nr->next=newhead;
                newhead=nr;
            }
    }
        data/=10;
    }
    head=newhead;
    }
    void add_one()
    {
        node *a=head;
        int number=0;
        while(a!=NULL)
        {
            number=number*10+a->data;
            a=a->next;
        }
        insert_number(number+1);
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
    a.insert_number(9999);
    //a.insert_number();
    a.displaya();
    a.add_one();
    a.displaya();

}
