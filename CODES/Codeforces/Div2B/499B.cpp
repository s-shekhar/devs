#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
	int n,m;
	string lang1,lang2,temp;
	map<string,string> langmap;

	cin>>n>>m;

	for(int i=0;i<m;i++)
		{
		cin>>lang1>>lang2;
		langmap.insert({lang1,lang2});
		}


	//for(map<string,string> :: iterator i = langmap.begin();i!=langmap.end();i++)
	//	cout<<i->first<<i->second<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp.length()>langmap[temp].length())
			cout<<langmap[temp]<<" ";
        else
            cout<<temp<<" ";
	}

	return 0;
}
