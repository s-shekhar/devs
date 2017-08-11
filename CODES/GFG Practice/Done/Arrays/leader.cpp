#include<iostream>
#include<stack>

using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N,arr[10000],maxm;
        stack<int> stk;

        cin>>N;

        for(int i=0; i<N; i++) cin>>arr[i];

        stk.push(arr[N-1]);
        maxm = arr[N-1];

        for(int i=N-2; i>0; i--)
            if(arr[i]>maxm)
            {
                stk.push(arr[i]);
                maxm=arr[i];
            }

        while(!stk.empty())
        {
            cout<<stk.top()<<" ";
            stk.pop();
        }
    cout<<endl;
    }
    return 0;
}
