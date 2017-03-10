//Find subarray with given sum | Set 1 (Nonnegative Numbers)

#include<iostream>

using namespace std;


int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7;
    int limit = sizeof(arr)/sizeof(arr[0]);
    int res = arr[0],total;


    for(int i=0; i<limit-1; i++)
    {
        total=arr[i];
        int j = i+1;

        while(total<sum)
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
            total -= arr[i];
        }

    }
    return 0;
}
