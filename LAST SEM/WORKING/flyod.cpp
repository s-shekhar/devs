#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int V=4;
   int dist[100][100]={};
   int graph[V][V] = { {0,   5,  999, 10},
                        {999, 0,   3, 999},
                        {999, 999, 0,   1},
                        {999, 999, 999, 0}
                      };
for(int i=0;i<V;i++)
       for(int j=0;j<V;j++)
       {
           dist[i][j]=graph[i][j];
       }

        for(int i=0;i<V;i++)
          for(int j=0;j<V;j++)
             for(int k=0;k<V;k++)
             {
             dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);

            }
/*
      for(int i=0;i<V;i++)
          for(int j=0;j<V;j++)
          if(dist[i][j]!=999 && dist[i][j]!=999)
	{cout<<"Dist b/w "<<i<<"and "<<j<<" is "<<dist[i][j]<<endl;}
*/

//result matrix
      for(int i=0;i<V;i++)
          {for(int j=0;j<V;j++)
            {cout<<dist[i][j]<<" ";}
           cout<<endl;
           }

   return 0;
}


