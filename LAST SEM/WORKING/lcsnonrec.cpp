#include<iostream>
#include<string>

using namespace std;

int main()
{

    int arr[100][100],i,j;


    string s1 = "SHASHANK";
    string s2 = "SHEKHAR";

    for(int i=0; i<=s1.size()+1; i++) arr[0][i] = 0;
    for(int i=0; i<=s2.size()+1; i++) arr[i][0] = 0;

    for(i=1; i<s2.size()+1; i++)
        for(j=1; j<s1.size()+1; j++)
        {
            if(s2[i-1]==s1[j-1]) arr[i][j]=arr[i-1][j-1]+1;

            else if(arr[i-1][j]>arr[i][j-1]) arr[i][j] = arr[i-1][j];
            else arr[i][j] = arr[i][j-1];

        }

    for(i=0; i<s2.size()+1; i++)
    {
        for(j=0; j<s1.size()+1; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }




i = s2.size()+1;
j = s1.size()+1;

while(i > 0 && j > 0)
{
if(s2[i-1]==s1[j-1]) {cout<<s2[i-1]<<endl; i--;j--;}

else if(arr[i-1][j]>arr[i][j-1]) i--;
else j--;
}























    return 0;





}

