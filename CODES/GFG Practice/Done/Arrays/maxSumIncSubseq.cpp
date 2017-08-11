#include<iostream>
#include<limits.h>

using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
{
    int n,arr[1000],lis[1000],lol=INT_MIN,res=INT_MIN;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        lis[i]=arr[i];
    }


    for(int i=1; i<n; i++){lol=INT_MIN;
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]>arr[j])
            {
                lol = max(lol,lis[i]+lis[j]);
            }
        }
        lis[i]=max(lol,lis[i]);
    }
    for(int i=0; i<n; i++)
    {
        res = max(res,lis[i]);
    }



    cout<<res<<endl;
}
    return 0;
}
