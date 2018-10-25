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
        node *outer=head;
        while(outer!=NULL&&outer->next!=NULL)
        {
            node *inner=outer;
            while(inner->next!=NULL)
            {
         //      cout<<"cc1"<<endl;
              // if(inner->next!=NULL)
                if(outer->data==inner->next->data)
                {
                   //  if(inner->next->next!=NULL)
                        inner->next=inner->next->next;
                      //  else
                      //  inner->next=NULL;
                  //  inner=inner->next;
                }
                else
                    inner=inner->next;
            }
        //    cout<<"ccccccccc"<<endl;
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
    a.insert_head(5);
    a.insert_head(2);
    a.insert_head(2);
   // a.insert_head(7);
   // a.insert_head(5);
    a.insert_head(4);
   // a.insert_head(7);
    a.display();
   // a.display_middle();
    a.delete_duplicate();
    //a.delete_middle();
    a.display();

}




