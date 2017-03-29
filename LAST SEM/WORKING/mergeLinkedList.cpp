#include<iostream>

using namespace std;

struct node
{
    node * next;
    int data;
}*temp;


void createnode(node ** head,int val)
{
    node * newnode = new node;
    newnode->data = val;
    newnode->next = NULL;

    if(*head==NULL)
    {
        *head = newnode;
    }
    else
    {
        temp = *head;
        while(temp->next!=NULL)
            temp = temp->next;

        temp->next = newnode;

    }
}

void displaynodes(node ** head)
{
    temp=*head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void sum(node ** head1,node ** head2)
{
    node * end1;
    node * end2;
    end1 = *head1;
    end2= *head2;
    node * p1=*head1;
    node * p2=*head2;

    while(end1->next!=NULL)
        end1= end1->next;

    while(end2->next!=NULL)
        end2= end2->next;

}

void merger(node ** head1,node ** head2)
{

node * temp1 = *head1;
node * temp2 = *head2;
node * prox1;
node * prox2;

while(temp1!=NULL && temp2!=NULL)
{
prox1 = temp1->next;
prox2 = temp2->next;

temp1->next = temp2;
temp2->next = prox1;
temp1 = prox1;
temp2 = prox2;
}
*head2 = temp2;
}




int main()

{

    node * head1 = NULL;
    node * head2 = NULL;

    createnode(&head1,1);
    createnode(&head1,3);
    createnode(&head1,5);
    createnode(&head1,7);
    createnode(&head1,9);
    createnode(&head1,11);
    createnode(&head1,13);
    createnode(&head1,15);
    createnode(&head1,17);
    createnode(&head1,19);


    displaynodes(&head1);
    cout<<endl<<endl;
    createnode(&head2,2);
    createnode(&head2,4);
    createnode(&head2,6);
    createnode(&head2,8);
    createnode(&head2,10);
    createnode(&head2,12);
    createnode(&head2,14);
    createnode(&head2,16);
    createnode(&head2,18);
    createnode(&head2,20);
    createnode(&head2,22);
    createnode(&head2,24);


    displaynodes(&head2);
    cout<<"\n\nMERGING NOW\n";

    merger(&head1,&head2);

    displaynodes(&head1);
    cout<<"\n\n\n";
    displaynodes(&head2);
    t
    return 0;
}
