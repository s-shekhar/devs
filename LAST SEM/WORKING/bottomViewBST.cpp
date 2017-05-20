//BOTTOM VIEW OF BST
//ALGO : TRAVERSE PREORDER Root level 0, Parent Level +1 for right side and parent level -1 for left child
//then dispalay the result sorted in increasing order of level of the nodes this will give you the bottom view of the BST

#include<iostream>
#include<queue>
#include<map>

using namespace std;


//priority_queue< map<int,int> > Q;

map <int,int> m;
map <int,int> :: iterator it = m.begin();

//-----------------------------------------------------------------------------------------------
struct bstnode
{
    bstnode* left;
    bstnode* right;
    int data;
    int level;                  //TO store the level for each node
}*root=NULL;
//-----------------------------------------------------------------------------------------------
bstnode * constNode(int val)
{
    bstnode * newnode;
    newnode = new bstnode;
    newnode -> data = val;
    newnode -> right  = NULL;
    newnode -> left = NULL;
    return newnode;
}
//-----------------------------------------------------------------------------------------------
void insertnode(bstnode ** newnode, int val)
{
    if(*newnode == NULL)
    {
        *newnode = constNode(val);
    }
    else if((*newnode)->data < val)
    {
        insertnode(&(*newnode) -> right,val);
    }
    else
        insertnode(&(*newnode) -> left,val);
}
//-----------------------------------------------------------------------------------------------
void preorder(bstnode ** newnode)
{
    if(*newnode == NULL) return;
    cout<<(*newnode) -> data<<endl;

    if((*newnode)->right!=NULL)
    {
        int levR = (*newnode) -> level + 1;
        (*newnode)->right->level = levR;
        cout<<endl<<"LevR is "<<levR<<" for "<<(*newnode)->right->data<<endl;
        m[levR]=(*newnode)->right->data;
    }
    if((*newnode)->left!=NULL){
     int levL = (*newnode) -> level -1;
     (*newnode)->left->level = levL;
     cout<<endl<<"LevL is "<<levL<<" for "<<(*newnode)->left->data<<endl<<endl<<endl;
    m[levL]=(*newnode)->left->data;
    }
    preorder(&(*newnode) -> left);
    preorder(&(*newnode) -> right);


}
//-----------------------------------------------------------------------------------------------


int main()
{
    insertnode(&root,10);
    insertnode(&root,5);
    insertnode(&root,4);
    insertnode(&root,7);
    insertnode(&root,6);
    insertnode(&root,30);
    insertnode(&root,35);
    insertnode(&root,36);
    insertnode(&root,37);


    m[0]=root->data;

    preorder(&root);

    cout<<endl<<"The Default vaue of "<<root->level;


    //iterating in the map

    cout<<endl<<endl<<"Bottom view is:"<<endl;


    for(map<int,int>::iterator i = m.begin();i != m.end(); i++){

    cout<<i -> second<<"\t";
    }



    return 0;
}
