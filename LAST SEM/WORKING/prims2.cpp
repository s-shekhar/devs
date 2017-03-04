#include<iostream>
#include<queue>

using namespace std;

int getminkey(int key[],int inmst[],int verts)
{
    int min = 999,toreturn;
    for(int i=0; i<verts; i++)
    {
        if(key[i]<min && inmst[i]==0)
        {
            min=key[i];
            toreturn=i;
        }
    }
    return toreturn;
}

int main()
{
    int temp,inmst[100] = {0},parent[100],key[100];
    int verts = 5;
    parent[0]=-1;

    for(int i=1; i<verts; i++)
        key[i] = 999;
    key[0] = 0;

    int arr[][5]= {    {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };

//initialize
    for(int i=0; i<verts; i++)
    {
        temp = getminkey(key,inmst,5);
        inmst[temp] = 1;
        cout<<"setting inmst["<<temp<<"] as 1"<<endl;
        for(int i=0; i<verts; i++)
        {
            if(arr[temp][i]!=0 && inmst[i]==0 && arr[temp][i]<key[i])
               {

               key[i]=arr[temp][i];
            parent[i]=temp;}
        }
    }
    for(int i=0; i<verts; i++)
        cout<<"Parent of "<<i<<" is "<<parent[i]<<endl;
    return 0;
}
