#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        int arr[10000];
        int left[10000];
        int right[10000];
        int res = 0;
        cin>>n;

        for(int i=0; i<n; i++) cin>>arr[i];

        int maxleft = arr[0];
        int maxright = arr[n-1];

        for(int i=1; i<n-1; i++)
        {
            left[i]=max(maxleft,arr[i]);
            maxleft = left[i];
        }

        for(int i=n-1; i>0; i--)
        {
            right[i]=max(arr[i],maxright);
            maxright = right[i];
        }


        for(int i=1; i<n-1; i++)
            res = res + min(left[i],right[i])-arr[i];

        cout<<res<<endl;
    }
    return 0;
}
