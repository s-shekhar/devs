//http://www.geeksforgeeks.org/count-triplets-with-sum-smaller-that-a-given-value/

#include<iostream>
#include<algorithm>

using namespace std;

bool myfunc(int a,int b)
{
return a<b;
}

int main()
{
int arr[] = {5, 1, 3, 4, 7};
int limit=sizeof(arr)/sizeof(int);
int minm,ans=0;

sort(arr,arr+limit,myfunc); //myfunc is optional


cin>>minm;

for(int i=0;i<limit-2;i++)
{
int j=i+1;
int k=limit-1;
while(j<k)
{
if(arr[i]+arr[j]+arr[k]>=minm) k--;
else
    {
    ans+=(k-j);
    j++;
    }
}
}
cout<<ans;
return 0;
}
