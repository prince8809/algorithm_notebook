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
        node *temp=new node(data);
        if(head==NULL)
        {
            head=temp;

        }
        else
        {
            node *current=head;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=temp;

        }

    }
    void display_middle()
    {
        //cout<<head->next->data;
        node *slow=head;
        node *fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        cout<<slow->data;
    }
    void delete_middle()
    {
         node *slow=head;
        node *fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            if(fast!=NULL&&fast->next!=NULL)
            slow=slow->next;
        }
        node *temp=slow->next;
        slow->next=slow->next->next;
        free(temp);
       // cout<<slow->data;

    }
    void display()
    {
        node *dis=head;
        cout<<endl;
        while(dis!=NULL)
        {
            cout<<dis->data<<" ";
            dis=dis->next;

        }
       cout<<endl;
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
    a.insert_head(6);
   // a.insert_head(7);
    a.display();
    a.display_middle();
    a.delete_middle();
    a.display();

}
