#include<iostream>
using namespace std;

int main()
{
int n;
int power = 1;
cout<<"Enter the Number\n";
cin>>n;
int ans =0;

while(n)
{
power = power * 5;

if(n & 1)
    ans += power;

n>>=1;

}


cout<<ans<<endl;

return 0;
}

