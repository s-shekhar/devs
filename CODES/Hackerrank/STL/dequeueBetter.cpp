#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main(){

  int T,j,len,window,n;
  deque<int> q;
  deque<int> :: iterator it;
  cin>>T;
   int maxm=0,maxindex;

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
  for(int it=0;it<window;it++)
  {
    int val = *(q.begin()+it);
    if(val > maxm)
      {
        maxm = val;
        maxindex = it;
      }
  }
  cout<<maxm<<" ";


}





}
    return 0;
}