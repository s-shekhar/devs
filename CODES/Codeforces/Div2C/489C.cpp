#include<iostream>
using namespace std;

int main()
{
    int siz,sum,minsum,it=0;
    int arr[10000];
    int minarr[10000];

    cin>>siz>>sum;

    if(sum ==0 && siz==1)
    {
        cout<<"0 0";return 0;
    }

    if(sum>9*siz || sum == 0)
        {cout<<"-1 -1";return 0;}


    minsum = sum-1;

    for(int i=0; i<siz; i++)
    {
        if(sum>9)
        {
            arr[i] = 9;
            sum-=9;
            continue;
        }

        else
        {
            arr[i]=sum;
            sum=0;
            continue;
        }

        arr[i]=0;
    }

    minarr[0]=1;

    for(int i=siz-1; i>0; i--)
    {
        if(minsum>9)
        {
            minarr[i]=9;
            minsum-=9;
            continue;
        }
        else
        {
            minarr[i]=minsum;
            minsum=0;
            continue;
        }
    }
    if(minsum!=0) minarr[0]+=minsum;

    for(int i=0; i<siz; i++)
        cout<<minarr[i];

    cout<<" ";

    for(int i=0; i<siz; i++)
        cout<<arr[i];

    return 0;
}



