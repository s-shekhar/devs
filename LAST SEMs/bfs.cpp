//Depth first search
#include<iostream>
#include<queue>

using namespace std;


int visited[100]= {};

int v=4,temp;

int arr[][100]={
  {0,1,1,0},
  {0,0,1,0},
  {1,0,0,1},
  {0,0,0,1}
};


int main()
{
    queue<int> Q;


int start = 2;
Q.push(start);
while(!Q.empty())
        {
                  cout<<Q.front()<<"::"<<endl;
                  temp = Q.front();
                  visited[temp]=1;
                  for(int i=0; i<v; i++)
                      if(arr[temp][i]!=0 && visited[arr[temp][i]]==0)
                      {
                      Q.push(i);
                      visited[i]=1;
                      }

          Q.pop();
          }


    return 0;
}
