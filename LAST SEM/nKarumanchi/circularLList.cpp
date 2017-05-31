//CIRCULAR LINKED LIST
//NO SPECIAL REQUIREMENT WHILE DELETING FROM THE END

#include<iostream>
using namespace std;


struct node{
    node * next;
    int data;
} *head=NULL;


void createNode(int val){
    node * newnode;
    newnode = new node;
    newnode -> data = val;
    newnode -> next = NULL;

    if(head==NULL)
    {
        head = newnode;
        head -> next = head;
    }

    else
    {
        node * temp;
        temp = head;

        while(temp->next!=head)
            temp = temp->next;

        temp->next = newnode;
        newnode -> next = head;
    }

}

void traverse(){
    node * temp = head;
    do
    {
        cout<<temp->data<<" | ";
        temp = temp -> next;
    }
    while(temp!=head);
}

void insertNode(int pos,int val){
    node * newnode;
    newnode = new node;
    newnode -> data = val;

    if(pos == 0)
    {

        node * temp = head;
        while(temp->next!=head)
            temp = temp -> next;


        cout<<"Inserting in the beginning"<<endl;
        newnode -> next = head;
        head = newnode;

        temp->next = head; //Updating to new head pointer


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
node * q = head;
node * temp = head;
if(pos == 0)
{
        while(temp->next!=head)
            temp = temp -> next;


q = head;
head = head -> next;
delete q;
temp -> next = head;

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

   insertNode(0,4); //(position ,value) --> 0 is beginning, -1 is end

    cout<<endl;
    traverse();

    deleteNode(2);

    cout<<endl;
    traverse();

    return 0;
}
