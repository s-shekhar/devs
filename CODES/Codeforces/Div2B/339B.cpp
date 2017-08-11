#include<iostream>

using namespace std;

int main()
{
long long int n,m,res,temp[1000000];
cin>>n>>m;


for(long long int i=0;i<m;i++)
	{

		cin>>temp[i];
	}

res = temp[0]-1;
for(long long int i=1;i<m;i++)
{
if(temp[i]>temp[i-1])
res = res + (temp[i]-temp[i-1]);
else if(temp[i]<temp[i-1]) //need to looparound
    res = res + (n-temp[i-1]) + temp[i];
}
cout<<res;
return 0;
}

