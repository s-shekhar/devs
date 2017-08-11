#include<iostream>
using namespace std;
int main()
 {
int T; cin>>T;
 while(T--)
 {
int n,arr[10000];
cin>>n;

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=1;i<n-1;i+=2)
{
if(arr[i]<arr[i-1]) swap(arr[i],arr[i-1]);
if(arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
 }
return 0;
}
