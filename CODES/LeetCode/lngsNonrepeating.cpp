#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
	map<char,int> inwindow;
    map<char,int> :: iterator it;
    int i=0,maxlen=0,res=0,window=2;

	string mystring;
	cin>>mystring;


while(i<mystring.length())
		{
		    if(inwindow.find(mystring[i]) == inwindow.end())
		    {
		    	inwindow.insert({mystring[i],1});
				maxlen++;
				res = max(res,maxlen);
			}
			else
			{
				maxlen=1;
				inwindow.clear();
				inwindow.insert({mystring[i],1});
			}
			i++;
		}

    cout<<res;

	return 0;
}
