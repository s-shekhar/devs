#include<iostream>
using namespace std;


int finder(int parent[],int a)
{
    if(parent[a]==-1) return a;
    else
      return finder(parent,parent[a]);
}

int unioner(int parent[],int a,int b)
{
    parent[finder(parent,parent[a])] = finder(parent,parent[b]);
    cout<<"Setting Parent["<<a<<"] = "<<b<<endl;

    return 0;
}


int main()
{
    int parent[100];
    int verts=5;

    for(int i=0; i<verts; i++) parent[i]=-1;

    int arr[][verts]=
    {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };

    for(int i=0; i<verts; i++)
        for(int j=0; j<verts; j++)
        {
            if(arr[i][j]!=0) //edge exists
            {
                if(finder(parent,i)==finder(parent,j))
                        cout<<"This edge will form cycle"<<endl;
                else unioner(parent,i,j);

            }
        }


for(int i=0;i<verts;i++)
    cout<<parent[i]<<endl;
    return 0;
}
