#include<iostream>
#include<limits>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int win,n,temp;
    int mindiff = INT_MAX;

    vector<int> arr;
    cin>>n;



    for(int i=0; i<n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    cin>>win;
    win--;
    for(int i=0;i<n-win;i++)
    {
        //cout<<"Comparing "<<arr[i]<<" and "<<arr[i+win]<<endl;
        mindiff = min(mindiff,arr[i+win]-arr[i]);
    }

    cout<<mindiff<<endl;
    }

    return 0;
}
