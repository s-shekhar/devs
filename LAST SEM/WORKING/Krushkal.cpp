#include<iostream>
#include <queue>

using namespace std;


int finder(int parent[],int a)
{
    if(parent[a]==-1) return a;
     return finder(parent,parent[a]);
}

int unioner(int parent[],int a,int b)
{
    parent[finder(parent,a)] = finder(parent,b);
    cout<<"Setting Parent["<<a<<"] = "<<b<<endl;

    return 0;
}


struct edge
{
int wt,v1,v2;

edge(int a,int b,int c):wt(a),v1(b),v2(c) //initializer
{
}

}; //end of struct

bool operator<(const edge& a,const edge& b)
{
return a.wt>b.wt; //> so that we can get a min heap unlike the default priority queue
}

int main() {

int parent[100];

for(int i=0;i<100;i++) parent[i]=-1;

queue<edge> result;

priority_queue<edge> Q;

//Pushing weight and edge vertices
Q.push(edge(10,0,1));
Q.push(edge(6,0,2));
Q.push(edge(5,0,3));
Q.push(edge(15,1,3));
Q.push(edge(4,2,3));

while(!Q.empty())
{
if(finder(parent,Q.top().v1)==finder(parent,Q.top().v2))
    cout<<"Cycle Banega"<<endl;
else
    {
      result.push(Q.top());
      unioner(parent,Q.top().v1,Q.top().v2);
    }
Q.pop();

}

while(!result.empty())
{cout<<result.front().wt<<" : "<<result.front().v1<<" ---- "<<result.front().v2<<endl;
result.pop();
}
  return 0;
}
