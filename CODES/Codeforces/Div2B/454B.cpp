#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> arr;
	int beg,n,i=0,j=0,temp;
	cin>>n;
	bool flag = false;

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}


	for(i=0;i<n-1;i++)
    {
        beg = arr[0];
        if(arr[i]>arr[i+1])
        {
            flag  = true;
             if(arr[n-1]>arr[0]) {cout<<"-1";return 0;}
            for(j=i+1;j<n-1;j++)
            if(arr[j]>beg || arr[j+1]<arr[j]) {cout<<"-1";return 0;}
        break;
        }

    }
	if(flag)
        cout<<(j-i);
        else
        cout<<0;
return 0;
}

