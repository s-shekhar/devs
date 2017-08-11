#include<iostream>
#include<map>
#include<limits.h>

#define loop(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
    int n,arr[10000];
    map<int,int> m;
    map<int,int> :: iterator it;
    int sum = 0;
    int maxm = 0;
    cin>>n;

    loop(i,n)
    {
        cin>>arr[i];
        sum += arr[i];
        if(sum == 0) maxm=i+1;          //if(sum==0) ans = i+1 since if you are getting the sum so far = 0 then
                                        //you are like, Hey! The entire array so far can be the answer too, since
                                        //all I wanted was sum to be zero so you take ans = i+1 (i.e values from 0
                                        //to i).
        if(m.find(sum) == m.end())
	        m.insert({sum,i});
	    else{
	    	auto j = m.find(sum);
	    	maxm = max(maxm, i  - j->second);
	    }
    }


cout<<maxm<<endl;
}
return 0;
}
