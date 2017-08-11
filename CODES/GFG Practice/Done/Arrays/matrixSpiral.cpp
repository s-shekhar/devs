#include<iostream>


using namespace std;

int main(){

	int n,m,arr[1000][1000];

    char ch;
	//cin>>n>>m;

	m=n=4;

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];

	int l=0,r=m-1,t=0,b=n-1,dir=0;

	while(t<=b && l<=r)
	{
		if(dir == 0){
			for(int i=l;i<=r;i++)
				cout<<arr[t][i]<<" ";

				t++;
		}

		else if(dir == 1){
			for(int i=t;i<=b;i++)
				cout<<arr[i][r]<<" ";

			r--;
		}

		else if(dir == 2){
			for(int i=r;i>=l;i--)
				cout<<arr[b][i]<<" ";

			b--;
		}

		else if(dir == 3){
			for(int i=b;i>=t;i--)
				cout<<arr[i][l]<<" ";

			l++;
		}

		dir = (dir+1)%4;

	}



	return 0;
}
