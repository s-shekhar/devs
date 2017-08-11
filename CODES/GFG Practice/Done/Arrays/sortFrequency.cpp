#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int main(){
int n,temp;

vector< pair<int,int> > v;
vector< pair<int,int> > :: iterator it;
map<int,int> m;

cin>>n;

for(int i=0;i<n;i++)
    {
     cin>>temp;
     if(m.find(temp) == m.end()) m.insert({temp,-1});
     else
     {m[temp]--;}
    }

for(map<int,int> :: iterator it = m.begin();it != m.end();it++)
   v.push_back({it->second,it->first});

sort(v.begin(),v.end());

for(it = v.begin();it != v.end();it++)
    while(v[it-v.begin()].first!=0)
{cout<<v[it-v.begin()].second;v[it-v.begin()].first++;}

return 0;}
