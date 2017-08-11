#include<iostream>

using namespace std;


int main(){
	int n,count;
	int height[1000001];

    cin>>n;
	for(int i=0;i<n;i++)
		cin>>height[i];

	count = height[0] + 1; //Travel to top and +1 to eat

	for(int i=1;i<n;i++)
	{
		if(height[i-1]==height[i])
		{
			count +=2; //one for jump and other to eat
		}

		else if (height[i-1]<height[i])
		{
			count = count + 2 + (height[i]-height[i-1]);
		}

		else
		{
			count = count + (height[i-1]-height[i]) + 2;
		}
	}
	cout<<count;

return 0;
}
