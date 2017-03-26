#include<iostream>
using namespace std;

int main()
{
int n,result=0;
cin>>n;

for(int j=1;j<=n;j++)
for(int i=0;i<32;i++)
{
if(j & (1<<i))
    result++;
}
cout<<result;
return 0;}
