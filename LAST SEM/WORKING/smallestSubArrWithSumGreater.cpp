//Smallest subarray with sum greater than a given value

#include<iostream>

using namespace std;


int main()
{
    //int arr[] =   {1, 11, 100, 1, 0, 200, 3, 2, 1, 250},sum= 280;
    //int arr[] = {1, 4, 45, 6, 10, 19},sum = 51;
    int arr[] = {1, 10, 5, 2, 7}, sum = 9;
    int limit = sizeof(arr)/sizeof(arr[0]);
    int total,ans=999,mini=0,minj=0;


    for(int i=0; i<limit-1; i++)
    {
        total=arr[i];
        int j = i+1;

        while(total<sum && j<limit)
        {
            total += arr[j];
            j++;
        }

        if(total > sum)
        {
           //cout<<"Yes b/w "<<i<<" and "<<j-1;
            cout<<"   "<<i<<"  "<<j-1<<endl;
            ans = min(ans,(j-1)-i+1);
        }

       /* else
        {
            total -= arr[i]; //remove the first element since we cannot form a sub array with that first element since usko liya
				//to exeed he hota hai sum. Ex 5,4,2 so sum 6 kay liye 5+4>6 so 5 toh aa he nhi sakta since
				//5+4+2 will still be >6 so 5 hatana padega.
        }
    */
    }
    cout<<ans;
    return 0;
}
