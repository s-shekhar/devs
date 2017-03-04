#include<iostream>

using namespace std;

struct node{
node* next;
int data;
}*head = NULL,*tail=NULL;


void insertnode(int data)
{
 node *newnode = new node;
 newnode->data = data;
 newnode->next = NULL;

 if(head == NULL)
        {
         head = newnode;
         tail = head;
        }
 else
    {
     tail->next = newnode;
     tail = newnode;
    }
}

void displaynode()
{
    node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
insertnode(1);
insertnode(2);
insertnode(3);
insertnode(4);

displaynode();


    return 0;
}
