#include<iostream>

using namespace std;


int adjacency[100][100] = {0};
int visited[100] = {0};
int n;


void DFS(int vertex)
{
    cout<<vertex<<" ";
    visited[vertex] = 1;
    for(int i = 0;i<n;i++)
        {
        if(adjacency[vertex][i] == 1 && visited[i] == 0)
         DFS(i);
        }
}


int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>adjacency[i][j];
        }

DFS(0);

    return 0;
}
