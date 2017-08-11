#include<iostream>

using namespace std;

int main()
{

    int n,m;

    int arr[101][101];
    int error = 0;
    int b[101][101];
    bool flag=false;

    cin>>n>>m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            b[i][j] = 1;
        }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(arr[i][j] == 0)
            {
                for(int i=0; i<n; i++) b[i][j] = 0;

                for(int j=0; j<m; j++) b[i][j] = 0;
            }
         }

//d
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            {
             error = 0;
             if(arr[i][j] == 1)
             {
                for(int i=0; i<n; i++)
                {
                    if(b[i][j] == 0) error++;
                }

                for(int j=0; j<m; j++)

                {
                    if(b[i][j] == 0) error++;
                }
            }
            if(error == m+n) {flag=true;break;}
            }

    if(flag) cout<<"NO\n";
    else
    {
        cout<<"YES\n";


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
