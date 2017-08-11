#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

vector<int> arr;
vector<int> :: iterator low,up;
int N,n;

cin>>N;
for(int i=0;i<N;i++)
    {cin>>n;
    arr.push_back(n);
    }
cin>>N;
sort(arr.begin(),arr.end());
for(int i=0;i<N;i++)
{
    cin>>n;
    low = lower_bound(arr.begin(),arr.end(),n);
    if(low!=arr.end())
        cout<<"Yes "<<(low-arr.begin())+1<<endl;
    else
    {
        up = upper_bound(arr.begin(),arr.end(),n);
        cout<<"No "<<(low-arr.begin())+1<<endl;

    }
}


return 0;
}
