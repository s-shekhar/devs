#include<iostream>

using namespace std;

int main()
{
int arr[] = {4, 3, 7, 8, 6, 2, 1};
int limit = sizeof(arr)/sizeof(int);

for(int i=1;i<limit;i++)
{

cout<<arr[i]<<"     ";

if(i%2!=0)
{
if(arr[i]<arr[i-1]) //odd places
    {
    swap(arr[i],arr[i-1]);
    cout<<"Swapping "<<arr[i]<<" and "<<arr[i-1]<<endl;
    }
}
else if(arr[i]>arr[i-1])    //even places
    {
    swap(arr[i],arr[i-1]);
    cout<<"Swapping "<<arr[i]<<" and "<<arr[i-1]<<endl;
    }
}


for(int i=0;i<limit;i++)
cout<<arr[i]<<" ";

return 0;
}
