//Length of the largest subarray with contiguous elements | Set 1

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
    int limit = sizeof(arr)/sizeof(arr[0]);
    int visited[100] = {},maxm=0,ans=0;

    sort(arr,arr+limit);

    for(int i=0; i<limit-1; i++)
    {
        int j=i+1;
        maxm=0;
        while(j<limit)
        {
            if(arr[j]==arr[j-1]+1) {maxm++;j++;}
            else break;
        }
        //cout<<"Ans "<<ans<<" Maxm "<<maxm<<endl;
        ans=max(maxm,ans);
    }


cout<<"Maximum is "<<ans+1;
    return 0;
}
