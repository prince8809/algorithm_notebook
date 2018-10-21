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
        void insert_append(int data)
        {
            node *temp=new node(data);
            if(head==NULL)
              head=temp;
            else
            {

                node *current=head;
                while(current->next!=NULL)
                    current=current->next;
                current->next=temp;

            }
        }
        void display()
        {
            node *curr=head;
            while(curr!=NULL)
            {
                cout<<curr->data<<" ";
                curr=curr->next;
            }
        }
        void delete_front()
        {
          node *curr=head;
          head=head->next;
          free(head);
        }
        void delete_back()
        {
            node *current=head;
            while(current->next->next!=NULL)
                current=current->next;
            node *temp=current->next;
            current->next=NULL;
            free(temp);
        }
        void delete_specific(int key)
        {
            node *current=head;
            while(current->next->data!=key)
                current=current->next;
            node *temp=current->next;
            current->next=current->next->next;
            free(temp);
        }
        void insert_araay(int key[],int n)
        {
         node *current=head;
           if(current==NULL)
           {
               for(int i=0;i<n;i++)
               {
                   node *temp=new node(key[i]);
                   if(i==0)
                   {
                       head=temp;
                       current=head;
                   }
                   else
                  {
                 current->next=temp;
                 current=current->next;
                  }
                }
           }
         else
         {
         while(current->next!=NULL)
         {
             current=current->next;
         }
         for(int i=0;i<n;i++)
               {
                   node *temp=new node(key[i]);
                   current->next=temp;
                   current=current->next;
         }
         }

        }
    };
    int main()
    {

        l_list a;
        int arr[5]={15,25,35,45,55};
        a.insert_append(1);
        a.insert_append(2);
        a.insert_append(3);
        a.insert_append(4);
        a.insert_append(5);
        a.insert_append(6);
        a.insert_append(7);
        a.insert_append(8);
        a.insert_append(9);
        a.insert_append(10);
        a.delete_front();
        a.delete_back();
        a.delete_specific(7);
        a.insert_araay(arr,5);
        a.display();
    }
