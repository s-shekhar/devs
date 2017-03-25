#include<iostream>
using namespace std;

int main()
{
int arr[]={1,3,5};
int limit = sizeof(arr)/sizeof(arr[0]);
int set1=0,set0=0;
int ans = 0;

for(int i=0;i<32;i++)
{
set1=0;
for(int j=0;j<limit;j++){
if(arr[j] & 1<<i) //To extract the 1 bit of each element staring fro the last
            set1++; //The number with bit as 1
}
set0 = limit - set1; //Numbers having bit 0 and not 1
ans = ans + (set1*set0*2); //*2 Since it an ordered pair so (1,3) != (3,1)
}

cout<<ans;

return 0;}
