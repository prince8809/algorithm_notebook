
//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1










/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       Node *start=head;
       Node *use=head;
       int count=0;
       while(start!=NULL)
       {
           count++;
           start=start->next;
       }
       if(n>count)return -1;
       while(count!=n)
       {
           use=use->next;
           count--;
           
       }
       
       return use->data;
}