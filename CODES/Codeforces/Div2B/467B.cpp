#include<iostream>

using namespace std;

int main()
{

    int n,m,k,fed,player[10000],count=0,res=0;
    int x = 1;
    bool flag;

    cin>>n>>m>>k;
    for(int i=0; i<m; i++) cin>>player[i];
    cin>>fed;

    for(int pl=0; pl<m; pl++)
    {
        x=1;count=0,flag=true;
        for(int i=0; i<n; i++)
        {
            if(x&player[pl]!= x&fed)
                count++;
            if(count>k)
            {
                flag=false;
                break;
            }
            x<<=1;
        }
    if(flag) res++;
    }
    cout<<res;
    return 0;
}
