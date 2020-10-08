#include<iostream>
using namespace std;
struct link
{
    int data;
    link *next;
}*head=NULL;
int count=0;
void inserting()
{
    int i,k;
    cout<<"\n Enter the position you wanna enter element in list : ";
    cin>>i;
    if(i>count+1||i<1)
    {
        cout<<"\n invalid position \n";
        return;
    }
    link *new_node=new link;
    cout<<"Enter the data : ";
    cin>>new_node->data;
    if(i==1)
    {
        new_node->next=head;
        head=new_node;
        count++;
        return;
    }
    link *temp;
    temp=head;
    for(k=0;k<i-2;k++)
        {temp=temp->next;}
    new_node->next=temp->next;
    temp->next=new_node;
    count++;
}
void deleting()
{
    int i;
    cout<<"\n Enter the position you wanna delete element in list : ";
    cin>>i;
    if(i>count||i<1)
    {
        cout<<"\n invalid position \n";
        return;
    }
    link *temp;
    temp=head;
    if(i==1)
    {
        head=temp->next;
        delete(temp);
        count--;
        return;
    }
    link *temp1;
    for(int k=0;k<i-2;k++)
        temp=temp->next;
    temp1=temp->next;
    temp->next=temp1->next;
    delete(temp1);
    count--;
}
void print()
{
    link *temp;
    temp =head;
    for(int i=0;i<count;i++)
        {cout<<temp->data<<"  ";
        temp=temp->next;}
}
void searching()
{
    int n,k=0;
    cout<<"enter the element you wanna search : ";
    cin>>n;
    int i;
    link *temp;
    temp = head;
    for(i=0;i<count;i++)
    {
     if(temp->data==n)
     {
         cout<<"\n the entered element is in "<<i+1<<"th position \n";
         k++;
     }
     temp=temp->next;
    }
    if(k==0)
    {
        cout<<"entered element doesn`t exist in linked list \n";
        return;
    }
}
int main()
{
    int a;

    while(a!=5)
    {

        cout<<"\n if you wanna insert a element enter 1 \n ";
        cout<<"if you wanna delete a element enter 2 \n ";
        cout<<"if you wanna print the elements enter 3 \n ";
        cout<<"if you wanna search a element enter 4 \n";
        cout<<"if you wanna quit enter 5 \n";
        cin>>a;
        switch(a)
        {
        case 1 :
            inserting();
            break;
        case 2 :
            deleting();
            break;
        case 3 :
            print();
            break;
        case 4 :
            searching();
            break;
        case 5 :
            break;
        default :
            cout<<"invalid number";
        }
    }
}
