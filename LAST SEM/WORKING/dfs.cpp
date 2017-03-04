//Depth first search
#include<iostream>

using namespace std;


int visited[100]={};
int arr[][100]={
  {0,1,1,0},
  {0,0,1,0},
  {1,0,0,1},
  {0,0,0,1}
};
int v=4;

int dfs(int vert)
{
  cout<<"Vert is "<<vert<<endl;
  visited[vert]=1;
  for(int i=0;i<v;i++)
  {
    if(arr[vert][i]!=0 && visited[i]==0)
      dfs(i);
  }
}


int main()
{
    dfs(2);
  return 0;
}
