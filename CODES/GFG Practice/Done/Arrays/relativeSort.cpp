#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
//int T; cin>>T;
//while(T--)
    {

        int temp,n1,n2,printed=0;


        vector<int> arr;
        map<int,int> m;
        int visited[10000]= {};
        cin>>n1>>n2;

        for(int i=0; i<n1; i++)
        {
            cin>>temp;
            arr.push_back(temp);
            m.insert({temp,0});
        }

        for(int i=0; i<n1; i++)
        {
            m[arr[i]]++;
        }

        for(int i=0; i<n2; i++)
        {
            cin>>temp;
            int bali = m[temp];
            visited[temp]=1;
            while(bali--)
            {cout<<temp<<" ";
            printed++;}
        }


        sort(arr.begin(),arr.end());
        for(int i=0; i<n1; i++)
        {
            if(printed==n1) break;
            if(visited[arr[i]]==0) {cout<<arr[i]<<" ";printed++;}
        }
        cout<<endl;
    }
    return 0;
}
