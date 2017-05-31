#include<iostream>
using namespace std;


struct node
{
    node * next;
    int data;
} *head=NULL;


void createNode(int val)
{
    node * newnode;
    newnode = new node;
    newnode -> data = val;
    newnode -> next = NULL;

    if(head==NULL)
    {
        head = newnode;
    }

    else
    {
        node * temp;
        temp = head;

        while(temp->next!=NULL)
            temp = temp->next;

        temp->next = newnode;
    }

}

void traverse()
{
    node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" | ";
        temp = temp -> next;
    }

}

void insertNode(int pos,int val)
{
    node * newnode;
    newnode = new node;
    newnode -> data = val;

    if(pos == 0)
    {
        cout<<"Inserting in the beginning"<<endl;
        newnode -> next = head;
        head = newnode;
    }

    else if(pos == -1)
    {
        cout<<"Inserting at the end"<<endl;
        node * temp = head;

        while(temp->next!=NULL)
            temp = temp -> next;

        temp -> next = newnode;
        newnode -> next = NULL;
    }

    else
    {
        node * temp = head;
        for(int i=0; i<pos-1; i++)
            temp = temp->next;

        newnode->next = temp->next;
        temp->next = newnode;

    }

}


void deleteNode(int pos)
{
node * temp;
temp = head;
if(pos == 0)
{
temp = head;
head = head -> next;
delete temp;
}

else
{
for(int i=0;i<pos-1;i++)
temp = temp -> next;

node * q = temp->next;
temp -> next = q -> next;

delete q;
}
}


int main()
{
    createNode(10);
    createNode(20);
    createNode(30);
    createNode(40);

    traverse();

    insertNode(1,4); //(position ,value) --> 0 is beginning, -1 is end

    cout<<endl;
    traverse();

    deleteNode(4);

    cout<<endl;
    traverse();

    return 0;
}
