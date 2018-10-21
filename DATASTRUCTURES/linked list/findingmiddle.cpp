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
    void insert_a(int data)
    {
        node *temp=new node(data);
        if(head==NULL)
            head=temp;
        else{
            node *current=head;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=temp;
        }
    }
    void displayi()
    {
        node *current=head;
        while(current!=NULL)
        {
            cout<<current->data<<" ";
            current=current->next;

        }

    }
    void display_middle()
    {

        node *slow=head;
        node *fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next;
            fast=fast->next;
            slow=slow->next;
        }
        cout<<"\nmiddle element is "<<slow->data<<endl;
    }

};
int main()
{
    l_list a;
    a.insert_a(1);
    a.insert_a(2);
    a.insert_a(3);
    a.insert_a(4);
    a.insert_a(5);
    a.insert_a(6);
    a.insert_a(7);
    a.displayi();
    a.display_middle();
}


