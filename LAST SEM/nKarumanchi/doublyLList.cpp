//DOUBLY LINKED LIST 
//MIND DELETING FROM THE END


#include<iostream>
using namespace std;


struct node
{
    node * next;
    int data;
    node * prvs;
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
        newnode -> prvs = NULL;
    }

    else
    {
        node * temp;
        temp = head;

        while(temp->next!=NULL)
            temp = temp->next;

        temp->next = newnode;
        newnode -> prvs = temp;
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


void traverseRev()
{
node * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp -> next;
    }

while(temp!=NULL){
cout<<temp->data<<" << ";
temp = temp -> prvs;
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
        head -> prvs = newnode;
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
        newnode -> prvs = temp;
    }

    else
    {
        node * temp = head;
        for(int i=0; i<pos-1; i++)
            temp = temp->next;


        newnode->next = temp->next;
        temp->next->prvs = newnode;
        newnode->prvs = temp;
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
        head->prvs = NULL;
        delete temp;
    }


    else
    {
        for(int i=0; i<pos-1; i++)
            temp = temp -> next;

        node * q = temp->next;
        temp -> next = q -> next;
        if(q->next!=NULL)               //Special case if deleting the last node
        q->next->prvs = temp;

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
    cout<<endl;
    traverseRev();

    insertNode(1,4); //(position ,value) --> 0 is beginning, -1 is end

    cout<<endl;
    traverse();
    cout<<endl;
//    traverseRev();

    deleteNode(4);

    cout<<endl;
    traverse();
    cout<<endl;
    traverseRev();


    return 0;
}

