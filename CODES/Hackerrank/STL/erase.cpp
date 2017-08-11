#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
int N,n,m;
cin>>N;
vector<int> arr;

for(int i=0;i<N;i++)
{
    cin>>n;
    arr.push_back(n);
}

cin>>n;

arr.erase(arr.begin()+n);

cin>>n>>m;

arr.erase(arr.begin()+n,arr.begin()+m);

for(vector<int>::iterator it = arr.begin();it!=arr.end();it++)
    cout<<*it;

    return 0;}
