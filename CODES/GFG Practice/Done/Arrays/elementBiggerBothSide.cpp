#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int T;cin>>T;
    while(T--){
int n,arr[10000],maxarr[10000],minarr[10000],currmax = INT_MIN,currmin = INT_MAX;
bool flag = false;
cin>>n;

for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxarr[i] = max(currmax,arr[i]);
        currmax = maxarr[i];
    }

for(int i=n-1;i>=0;i--)
    {minarr[i] = min(currmin,arr[i]);
    currmin = minarr[i];
    }

//for(int i=0;i<n;i++)
 //   cout<<"("<<maxarr[i]<<" "<<minarr[i]<<")  ";

for(int i=1;i<n-1;i++)
if(arr[i]>=maxarr[i-1] && arr[i]<=minarr[i+1]) {cout<<arr[i]<<endl; flag=true;break;};
if(!flag) cout<<-1<<endl;
}
return 0;
}
