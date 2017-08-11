#include<iostream>
#include<string>

using namespace std;

int main()
{
 int i=0;
    string mystring;

    cin>>mystring;

    int mid = (mystring.length()-1)/2;

    while(i<=mid)
    {
    	int i=0,j = mystring.length()-1;
        //cout<<mystring[i]<<"    ::: \n";
        while(j>=mystring.length()/2)
        {
            if(mystring[i]==mystring[j])
            {
                cout<<mystring[i];
                j--;
                i++;
                break;
            }

        }
        if(j=mystring.length()) i++;
    }


    return 0;
}
