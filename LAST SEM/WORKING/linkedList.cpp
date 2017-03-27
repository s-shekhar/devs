#include<iostream>
using namespace std;

struct node
{
    node * next;
    int data;
}*head=NULL,*temp;


void createnode(int val)
{
    node * newnode = new node;
    newnode->data = val;
    newnode->next = NULL;

    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next!=NULL)
            temp = temp->next;

        temp->next = newnode;

    }
}


void insertnode(int val)
{
    node * newnode = new node;
    newnode->data = val;

    temp = head;

    while(temp->next->data<val)
    {
        temp = temp->next;
        if(temp->next==NULL) break;
    }

    if(temp->next==NULL)
    {
        temp->next = newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=temp->next;
        temp->next = newnode;
    }

}


void deletenode(int val)
{
    node * todel;
    temp = head;


    while(temp->next->data!=val)
     {   temp=temp->next;

    if(temp->next==NULL)
    {
        cout<<"\nNo value found\n";
        return;
    }
    }
    if(temp == head)
    {
        head = head->next;
        delete temp;
    }
    else
    {
        todel = temp->next;
        temp->next = todel->next;
        delete todel;
    }


}



void displaynodes()
{
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main()
{
    createnode(1);
    createnode(2);
    createnode(9);

    insertnode(3);
    insertnode(10);

    displaynodes();

   deletenode(3);
   deletenode(18);

    displaynodes();


    return 0;
}
