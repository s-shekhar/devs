#include<iostream>
#include<queue>


using namespace std;

int visited[100]= {};

struct bsnode
{
    bsnode * left;
    bsnode * right;
    int data,depth;
}*root = NULL;

bsnode * newnode(int val)
{
    bsnode *temp;
    temp = new bsnode;
    temp->left = NULL;
    temp->right = NULL;
    temp->data = val;
    return temp;
}


void insertnode(bsnode ** temp,int val)
{
    if(*temp == NULL)
        *temp = newnode(val);

    else if(val>(*temp) -> data)
        insertnode(&(*temp) -> right,val);
    else
        insertnode(&(*temp) -> left,val);
}

void dfs(bsnode ** temp,int * flag)
{
    if((*temp)->left && !(*temp)->right || !(*temp)->left && (*temp)->right)
    {
    cout<<"\nNot a Full tree\n";
    *flag = 0;
    return;
    }

    if((*temp)->left && *flag)
        dfs(&(*temp)->left,flag);
    if((*temp)->right && *flag)
        dfs(&(*temp)->right,flag);
    cout<<(*temp)->data<<endl;
}

void inorder(bsnode ** temp)
{
    if((*temp) == NULL) return;
    inorder(&(*temp) -> left);
    cout<< (*temp) -> data<<"\n";

    inorder(&(*temp) -> right);
}


int main()
{

    insertnode(&root,10);
    insertnode(&root,5);
    insertnode(&root,4);
    insertnode(&root,7);
    insertnode(&root,30);
    insertnode(&root,35);
    insertnode(&root,26);
    insertnode(&root,8);


    //inorder(&root);

    int flag = 1;

    dfs(&root,&flag);
    return 0;
}
