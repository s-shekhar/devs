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

void inorder(bsnode ** temp)
{
    if((*temp) == NULL) return;
    inorder(&(*temp) -> left);
    cout<< (*temp) -> data<<"\n";
    inorder(&(*temp) -> right);
}


void minDepth()
{
    queue <bsnode *> Q;
    Q.push(root);
    root -> depth = 0;
    while(!Q.empty())
    {
        if(!(Q.front()->left) && !(Q.front()->right))
        {
            cout<<"The minimum depth is: "<<Q.front()->depth;
            break;
        }
        if(Q.front()->left)
        {
            Q.push(Q.front()->left);
            (Q.front()->left)->depth = (Q.front()->depth)+1;
        }
        if(Q.front()->right)
        {
            Q.push(Q.front()->right);
            (Q.front()->right)->depth = (Q.front()->depth)+1;
        }

        Q.pop();
    }
}


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

    inorder(&root);
    minDepth();

    return 0;
}
