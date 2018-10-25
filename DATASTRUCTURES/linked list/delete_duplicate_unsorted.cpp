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
    void delete_duplicate()
    {
        node *current=head;
        while(current!=NULL&&current->next!=NULL)
        {
            if(current->data==current->next->data)
            {
               node *temp=current->next;
              current->next=current->next->next;
               free(temp);
            }
            else
            {
                current=current->next;
            }

    }
    }

    void sortlist()
    {
       node *outer=head;
       while(outer!=NULL)
       {
            node *current=head;
       while(current!=NULL&&current->next!=NULL)
       {
           if(current->data>=current->next->data)
           {
               swap(current->data,current->next->data);
           }
           current=current->next;
       }
       outer=outer->next;
    }
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
    a.insert_head(2);
    a.insert_head(2);
    a.insert_head(2);
    a.insert_head(2);
    a.insert_head(2);
    a.insert_head(2);
   // a.insert_head(7);
    a.display();
   // a.display_middle();
    a.sortlist();
    a.delete_duplicate();
    //a.delete_middle();
    a.display();

}



