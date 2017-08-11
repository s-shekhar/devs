#include<iostream>
#include<string>
#include<map>

using namespace std;

void callme()
{
 bool flag = true;
 map<char,int> m;

 string mystring,anastring;
cin>>mystring>>anastring;

if(mystring.length() != anastring.length()) {cout<<"NO\n"; return;}

for(int i=0;i<mystring.length();i++){
	if(m.find(mystring[i]) == m.end()) m[mystring[i]]=1;
	else
		m[mystring[i]]++;
 }

for(int i=0;i<mystring.length();i++){
	if(m.find(anastring[i]) == m.end()) {cout<<"NO\n";return;}
	else
		m[anastring[i]]--;
}


for(map<char,int> :: iterator it = m.begin(); it != m.end(); it++)
	if(it->second !=0) {cout<<"NO\n";return;}

cout<<"YES\n"; return;

}

int main()
 {
int T; cin>>T;
while(T--)
 {
     callme();
 }
return 0;
}
