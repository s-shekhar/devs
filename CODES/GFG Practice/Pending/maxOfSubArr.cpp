#include<iostream>
#include<limits>

using namespace std;


int main()
{
    int maxm=INT_MIN;
    int n,win,arr[10000];

    cin>>n>>win;
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0; i<win; i++) {

            maxm=max(maxm,arr[i]);
    }
    cout<<maxm<<endl;
    for(int i=1;i<n;i++)
    {
    if(arr[i]>maxm || arr[i]==maxm )
        {
         maxm=0;
         i++;
        for(int k=0;k<win;k++)
            {
                maxm = max(maxm,arr[i+k]);
            }
        }
    cout<<maxm<<endl;
    }





        return 0;
    }
