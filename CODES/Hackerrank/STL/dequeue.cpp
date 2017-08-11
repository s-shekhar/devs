#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main(){

  int T,j,len,window,n;
  deque<int> q;
  deque<int> :: iterator it;
  cin>>T;
   int maxm=0;

  while(T--)
{
cin>>len>>window;
for(int i=0;i<len;i++)
	{
	cin>>n;
	q.push_back(n);
	}

while(1)
{
if(q.size()<window)
	break;
for(it = q.begin(),j=0;j<window;j++,it++)
{
int val = *it;
//cout<<"Max b/w "<<maxm<<"   "<<val<<endl;
    maxm = max(maxm,val);
}
cout<<maxm<<" ";
//cout<<"Popping"<<q.front()<<endl;
q.pop_front();
maxm = 0;
}
      cout<<endl;
      q.pop_front();
}
    return 0;
}