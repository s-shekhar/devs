//Find subarray with given sum | Set 1 (Nonnegative Numbers)

#include<iostream>

using namespace std;


int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 13;
    int limit = sizeof(arr)/sizeof(arr[0]);
    int total = arr[0],j=1;

    for(int i=0; i<limit-1; i++)
    {

        while(total<sum && j<limit)
        {
            total += arr[j];
            j++;
        }

        if(total == sum)
        {
            cout<<"Yes b/w "<<i<<" and "<<j-1;
            break;
        }

        else
        {
            total -= arr[i]; //remove the first element since we cannot form a sub array with that first element since usko liya
				//to exeed he hota hai sum. Ex 5,4,2 so sum 6 kay liye 5+4>6 so 5 toh aa he nhi sakta since
				//5+4+2 will still be >6 so 5 hatana padega.
        }

    }
    return 0;
}
