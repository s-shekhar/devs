#include<iostream>
#include<queue>

using namespace std;
int main()
{
    int verts=5,parent[100],visited[100] = {0};
    pair<int,int> temp;
   /* int arr[][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };
    */
    int arr[][5]={{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };

    priority_queue< pair<int,int> > Q;  //shortest,vertex

    for(int i=0; i<verts; i++)
        parent[i] = -1;

    Q.push({0,0});

    temp = Q.top();

    while(visited[temp.second] == 0)
    {

        for(int j=0; j<verts; j++)

        {
            if(arr[temp.second][j]!=0 && visited[j] == 0)
            {
                Q.push({-arr[temp.second][j],j});
                parent[j] = temp.second;
            }
        }
        visited[temp.second] = 1;
        Q.pop();
        temp = Q.top();
    }

    for(int i=0; i<verts; i++)
        cout<<"Parent of "<<i<<" is "<<parent[i]<<endl;


    while(!Q.empty())
    {
        cout<<"Vertex "<<Q.top().second<<" key value "<<Q.top().first<<endl;
        Q.pop();
    }

    return 0;
}
