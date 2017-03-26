//Find the element appearing only once in the array;

#include<iostream>

using namespace std;


int main()
{
int sum=0,arr[]={1,1,2,1,3,3,5,5,5,3,2,2,9};
int limit = sizeof(arr)/sizeof(arr[0]);
int j=0,result=0;

for(int j=0;j<32;j++)
{
sum = 0;

for(int i=0;i<limit;i++)
    {
    sum += arr[i] & (1<<j);
    }

if(sum%3)
result |= (1<<j);

}
cout<<endl<<"Result: "<<result;
return 0;}
