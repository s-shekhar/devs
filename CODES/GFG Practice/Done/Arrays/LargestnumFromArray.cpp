#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int compare(string x,string y)
{
    string xy = x+y;
    string yx = y+x;
    if(xy>yx) return 1;
    else return 0;
}


int main(){
int n;
vector<string> v;
string mystring;

cin>>n;

for(int i=0;i<n;i++)
{
    cin>>mystring;
    v.push_back(mystring);
}

sort(v.begin(),v.end(),compare);

for(vector<string> :: iterator it = v.begin();it!=v.end();it++)
    cout<<*it;




return 0;}
