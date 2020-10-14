#include <stdio.h>
void reverse(void);

   struct node
   {
       int data;
       struct node *next;
   } *tail;
int main()
{
   reverse();

}
void reverse()
   {
       struct node *current, *prev, *nextnode;
       current=tail->next;
       nextnode=current->next;
       if(tail==0)
       {
           printf("The linked list is empty.\n");
       }
       else
       {
           while(current!=tail)
           {
               prev=current;
               current=nextnode;
               nextnode=current->next;
               current->next=prev;
           }
           nextnode->next=tail;
           tail=nextnode;
       }
   }
