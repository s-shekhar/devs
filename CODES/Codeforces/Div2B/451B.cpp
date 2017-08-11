#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

	int temp,n,i,j;
	vector<int> arr1,arr2;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr1.push_back(temp);
	}

	arr2 = arr1;
	sort(arr2.begin(),arr2.end());

	for(i=0,j=n-1;i<=j;)
	{
		if(i==j) {cout<<"yes"<<endl<<"1 1";return 0;}

		if(arr1[i]==arr2[i]) i++;
		else if(arr1[j]==arr2[j]) j--;
        else break;
	}

    cout<<"i "<<i<<" j "<<j<<endl;

    //sort(arr1,arr1.begin()+i,arr1.begin()+j);

    int lol = j-i;
    for(int k=0;k<lol;k++)
    //while(lol--)
    {
    if(arr1[i]!=arr2[j]) {cout<<"no"; return 0;}
    i++;
    j--;
    }
    cout<<"yes\n"<<j+1<<" "<<i+1; //since both i and j will be reversed at this point
	return 0;
}
