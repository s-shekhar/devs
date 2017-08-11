#include<iostream>
#define loop(n) for(int i=0;i<n;i++)

using namespace std;


int main(){

	int n,arr[10000];
	bool flag = true;

	cin>>n;

	loop(n) cin>>arr[i];

    int lim = 2*(n/2);

    for(int i=1;i<lim;i+=2)
    if(arr[i]!=arr[i-1]) {cout<<arr[i-1];flag=false;break;}

    if(flag) cout<<arr[n-1];


	return 0;
}
