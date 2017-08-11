#include<iostream>

using namespace std;

int check()
{
    bool flag = false;
    int N,arr[10000],sum=0,target;

    cin>>N>>target;

    for(int i=0; i<N; i++)
        cin>>arr[i];

    for(int i=0; i<N-1; i++)
    {
        sum = arr[i];
        for(int j=i+1; j<N; j++)
        {
            sum = sum + arr[j];
            if(sum>target)
                break;
            if(sum==target)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
}


int main()
{
    int T;
    cin>>T;
    while(T--)
        check();
    return 0;
}
