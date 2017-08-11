#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{

	int k,list[27],maxm = 0,sum,temp=0;
	string str;
	cin>>str>>k;
	int len = str.length();

for(int i=0;i<26;i++)
{
cin>>list[i];
maxm = max(maxm,list[i]);
}

for(int i=0;i<len;i++)
{
    temp += (i+1)*list[str[i]-'a'];
}
int toadd = (k*len + (k*(k+1)/2))*maxm;
cout<<temp+toadd;
return 0;
}
