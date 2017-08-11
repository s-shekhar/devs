#include<iostream>

using namespace std;


int main()
{
  //  int T;
   // cin>>T;
   // while(T--)
    {
        bool flag = false;
        int n,arr[10000];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int minma,maxma;
        int i=1;
        while(i<n)
        {
            if(arr[i-1]<arr[i]) //i.e local Minima
            {
                flag = true;
                cout<<"("<<i-1<<" ";

                while(arr[i-1]<arr[i]) i++;

                cout<<i-1<<") ";

            }
            i++;
        }
        if(!flag) cout<<"No Profit";
        cout<<endl;

    }



    return 0;
}
