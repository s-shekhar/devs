//Swap all odd and even bits

#include<iostream>

using namespace std;


int main()
{
int n= 23;

int even = n & 0xAAAAAAAA;
int odd = n & 0x55555555;

even>>=1;odd<<=1;

int ans = even|odd;
cout<<ans<<endl;

return 0;}
