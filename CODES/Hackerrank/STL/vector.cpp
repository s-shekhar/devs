#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
int N,n;
cin>>N;
vector<int> arr;

for(int i=0;i<N;i++)
{
    cin>>n;
    arr.push_back(n);
}
sort(arr.begin(),arr.end())

for(vector<int> :: iterator it = arr.begin(),it!=arr.end(),it++)
	cout<<*it<<" ";

return 0;}
