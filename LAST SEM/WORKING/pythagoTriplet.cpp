//Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
int arr[] = {3, 1, 4, 6, 5};
int j,k,limit = sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+limit);

for(int i=0;i<limit-2;i++)
{

j=i+1;
k=limit-1;

while(j<k)
{
if(pow(arr[i],2)+pow(arr[j],2)==pow(arr[k],2)) {cout<<"Exists for "<<arr[i]<<"^2 + "<<arr[j]<<"^2 = "<<arr[k]<<"^2";break;}

else if(pow(arr[i],2)+pow(arr[j],2)>pow(arr[k],2)) {break;}

else //i.e sum is less than K^2 so decrement k
    k--;
}

}





return 0;
}
