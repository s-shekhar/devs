#include<iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
	int n,k,arr[10000];
	int lim;

	cin>>n;


	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cin>>k;

	if(k==1)
			{
				for(int i=0;i<n;i++)
					cout<<arr[i]<<" ";
			}

	else if(k>n){
				for(int i=n-1;i>=0;i--)
					cout<<arr[i]<<" ";
	}

	else
	{
	lim = (k*(n/k));

    for(int i=0;i<lim;i+=k)
    {
        for(int j=i,l=k-1;j<i+(k/2);j++,l--)
        {
            swap(arr[j],arr[i+l]);
        }
    }

    for(int i=lim,j=n-1;i<j;i++,j--)
    {
   swap(arr[i],arr[j]);
    }



    for(int i=0;i<n;i++)
					cout<<arr[i]<<" ";


	}
	cout<<endl;
}
	return 0;
}
