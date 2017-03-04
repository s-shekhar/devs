#include<iostream>
#include<list>

using namespace std;

void relax(int u,int v)
{
  if(shortest[u]+shortest[v]<shortest[v])
  {
    shortest[v]=shortest[u]+shortest[v];
    pred[v]=u;
  }
}


int main()
{
    int s,vert,arr[100][100];
    int shortest[100] = {999};
    int pred[100]={-1};

    cout<<"Enter the number of vertices";
    cin>>vert;

    //for(int i=0;i<vert;i++) shortest[i]=0;

    cout<<"Enter the weighted adjacency matrix";
    for(int i=0;i<vert;i++)
    for(int j=0;i<vert;i++)
    {
        cin>>arr[i][j];
    }

    cout<<"Which is the starting vertex?";
    cin>>s;


    return 0;
}
