#include<iostream>

using namespace std;

int main(){

int  T;
cin>>T;

while(T--)
{

	int i=0,sum=0,num,arr[10000];
	cin>>num;

	for(int i=0;i<num;i++) cin>>arr[i];

	maxm = arr[0];

	while(i<num)
	{
		if(sum + arr[i] > 0) {
			sum+=arr[i];
			maxm = max(sum,maxm);
			i++;
		}
		else{

			sum=0;
			i++;
		}
	}

    cout<<maxm<<endl;
}
	return 0;
}
