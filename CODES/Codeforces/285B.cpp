#include<iostream>

using namespace std;
int main(){

	int arr[100001],ini,fin,flag = false,tot,count=0;
	cin>>tot>>ini>>fin;



	for(int i=1;i<=tot;i++)
		cin>>arr[i];

    if(arr[ini] == fin) {cout<<"0";return 0;}

    int temp = ini;

	while(1)
	{ //  cout<<"Is "<<arr[ini]<<" == "<<fin<<endl;
		if(arr[temp] == fin) {count++;cout<<count;break;}
		else if(ini == arr[temp]) {flag = true; break;}
		else{temp = arr[temp];count++;}
	}

	if(flag) cout<<"-1";

	return 0;
}
