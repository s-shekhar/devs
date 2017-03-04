/*DIJKSTRA ALGORITHM
GEEKSFORGEEKS SAMPLE INPUT
9
0 4 0 0 0 0 0 8 0
4 0 8 0 0 0 0 11 0
0 8 0 7 0 4 0 0 2
0 0 7 0 9 14 0 0 0
0 0 0 9 0 10 0 0 0
0 0 4 14 10 0 2 0 0
0 0 0 0 0 2 0 1 6
8 11 0 0 0 0 1 0 7
0 0 2 0 0 0 6 7 0
*/

#include<iostream>
#include<stdio.h>
#include<list>
#include<queue>

using namespace std;

/*
void Relax(int u,int dist,int v,int arr[][20],priority_queue<pair<int,int> > &Q) //dist is till far the shortest distance of u
{
    Q.push({v,dist+arr[u][v]});
}

*/


int main()
{
    int s,verts;

    int arr[][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };



    int visited[50]= {0};
    pair<int,int> temp;
    priority_queue<pair<int,int> > Q; //<Vertex,Its Shortest> pair Queue,

    priority_queue< pair<int,int> > S;

    cout<<"Enter the No. of vertices\n";
    // cin>>verts;
    verts = 9;


    /*cout<<"Enter the weighted adjacency matrix";
    for(int i=0; i<verts; i++)
        for(int j=0; j<verts; j++)
        {
            cin>>arr[i][j];
        }

    */
    Q.push({0,0}); //Pushing Starting vertex with shortest distance= 0

    while(!Q.empty())
    {
        temp = Q.top();
        cout<<"Q.top is Vertex:"<<temp.second<<" "<<temp.first<<endl;
        if(visited[temp.second]==0)
        {

            for(int j=0; j<verts; j++)
            {
                if(arr[temp.second][j]!=0)
                {
                    Q.push({temp.first-arr[temp.second][j],j});   //Relax(temp.first,temp.second,j,arr,Q);
                    cout<<"   I pushed the vertex "<<j<<" and distance as -"<<temp.first+arr[temp.second][j]<<endl;
                }
            }
            visited[temp.second]=1; cout<<"Damn Setting "<<temp.second<<" as 1\n";
        }
        else
        {
            S.push(Q.top());
            Q.pop();
        }
    }

    int visit[50]= {0};
//Printing the Final Result
    while(!S.empty())
    {

        if(visit[S.top().second]==0)
        {
            cout<<"Node: "<<S.top().second<<" Shortest: "<<-(S.top().first)<<endl;
            visit[S.top().second]=1;
        }
        S.pop();
    }
}
