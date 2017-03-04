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

void deletenode(int data)
{
    node * temp = head;
    node * p;

    while(temp->next->data!=data)
        temp=temp->next;
    p = temp->next;
    temp->next = p->next;
    delete p;
    cout<<endl<<"Deleted the value "<<data<<endl;
}

int main()
{
insertnode(1);
insertnode(2);
insertnode(3);
insertnode(4);

displaynode();

deletenode(3); //delete node with value 3

displaynode();

    return 0;
}

