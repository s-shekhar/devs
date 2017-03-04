/* Longest Increasing Subsequence*/

#include<iostream>

using namespace std;

int main() {

int lislen=0;
int arr[] = {10, 22, 9, 33, 21, 50, 41, 60},arr2[100];


for(int i=0;i<sizeof(arr)/sizeof(int);i++)
arr2[i]=1;


for(int i=1;i<sizeof(arr)/sizeof(int);i++)
for(int j=0;j<i;j++)
{
if(arr[j]<arr[i])
{
    arr2[i] = max(arr2[j]+1,arr2[i]);
    if(arr2[i]>lislen)
        lislen=arr2[i];
}
}
for(int i=0;i<sizeof(arr)/sizeof(int);i++)
cout<<arr2[i]<<"        ";
cout<<endl;

for(int i=(sizeof(arr)/sizeof(int))-1;i>=0;i--)
{
//cout<<arr2[i]<<" == "<<lislen<<endl;
    if(arr2[i]==lislen) {cout<<endl<<arr[i];
    lislen--;}
}

  return 0;
}
