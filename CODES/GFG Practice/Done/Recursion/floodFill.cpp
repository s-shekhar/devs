#include<iostream>

#define loop(i,n) for(int i=0;i<n;i++)

using namespace std;

int n,m,x1,y1,val;


int arr[1000][1000];

int visited[1000][1000]={};


void dfs(int i,int j,int target,int val)
{
    if(arr[i][j]!=target) return;
	if(visited[i][j]==1) return;
	if(arr[i][j]==val) return;
	if(i>=n || j>=m || i<0 || j<0) return;

	arr[i][j] = val;
	visited[i][j] = 1;

	dfs(i+1,j,target,val);
    dfs(i,j-1,target,val);
    dfs(i,j+1,target,val);
    dfs(i-1,j,target,val);

}


int main(){
int T;
cin>>T;
while(T--)
{

	cin>>n>>m;

	loop(i,n)
	loop(j,m)
    {cin>>arr[i][j];visited[i][j]=0;}

	cin>>x1>>y1>>val;

	int target = arr[x1][y1];

	dfs(x1,y1,target,val);

    loop(i,n)
	loop(j,m)
	cout<<arr[i][j]<<" ";
    cout<<endl;
}
	return 0;
}
