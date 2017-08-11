#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        bool flag = false;

        int N,arr[10000];
        int megasum=0;

        cin>>N;

        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
            megasum += arr[i];
        }

        if(N==1)
        {
            cout<<1<<endl;
            continue;
        }

        else
        {
            int sum = arr[0];
            for(int i=1; i<N; i++)
            {
                if(sum == (megasum-arr[i])/2 && (megasum-arr[i])%2==0)
                {
                    cout<<i+1<<endl;
                    flag=true;
                    break;
                }
                else
                {
                    sum += arr[i];
                }
            }
        }

       if(!flag) cout<<-1<<endl;
    }
    return 0;
}
