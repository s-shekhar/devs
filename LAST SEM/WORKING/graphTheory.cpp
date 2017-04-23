//FINDING AND PRINTING CONNECTED COMPONENTS
//14BCE0278
//SHASHANK SHEKHAR

#include<iostream>

using namespace std;


int visited[100]= {};
int arr[][100]=
{
    {0,1,0,0,0},//0
    {1,0,1,0,0},//1
    {0,1,0,0,0},//2
    {0,0,0,0,1},//3
    {0,0,0,1,0},//4
};
int v=5;

int dfs(int vert,int count)
{
    cout<<"Vertex "<<vert<<endl;
    visited[vert]=1;
    for(int i=0; i<v; i++)
    {
        if(arr[vert][i]!=0 && visited[i]==0)
            dfs(i,count);
    }
}


int main()
{
    int count=0;

    for(int i=0; i<v; i++)
    {
        if(visited[i]==0)
        {
            count++;
            cout<<"Component "<<count<<" includes:\n";
            dfs(i,count);
        }
    }

    if(count==1)
        cout<<endl<<"This is a connected graph with only 1 component";
    else
        cout<<endl<<"This is a connected graph with "<<count<<" component";

    return 0;
}
