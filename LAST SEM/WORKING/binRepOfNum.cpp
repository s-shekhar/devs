#include<iostream>
using namespace std;

int main()
{
int n,result;
cin>>n;

for(int i=0;i<32;i++)
{
if(n & (1<<i))
    cout<<"1";
else
    cout<<"0";
}
return 0;}
