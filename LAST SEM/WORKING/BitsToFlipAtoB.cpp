#include<iostream>

using namespace std;


int main()
{
int n,m,x,counter=0;
n=15,m=8;

x = n ^ m;

while(x)
{
if(x&1)
counter++;

x>>=1;
}

cout<<counter;
return 0;}
