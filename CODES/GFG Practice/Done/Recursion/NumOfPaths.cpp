#include<iostream>
#define loop(i,n) for(int i=0;i<n;i++)

int n,m,count;

using namespace std;

int arr[1000][1000];

void dfs(int i,int j){

	if(i>=n || j>=m || i<0 || j<0) return;
	if(i==n-1 && j==m-1) {count++;return;}
	dfs(i+1,j);
	dfs(i,j+1);

}

int main(){

cin>>n>>m;

count=0;
dfs(0,0);
cout<<count;


	return 0;
}
