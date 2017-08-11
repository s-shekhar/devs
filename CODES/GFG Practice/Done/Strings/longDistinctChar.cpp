#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{

    int count,i=0,res=0;

    set<char> myset;

    string mystring;

    cin>>mystring;

    while(i<mystring.length())
    {
        count=0;
        for(int j=i; j<mystring.length(); j++)
        {
            if(myset.find(mystring[j]) == myset.end())
            {
                myset.insert(mystring[j]);
                count++;
                res = max(res,count);
            }
            else
            {
                break;
            }
        }
        myset.clear();
        i++;
    }

    cout<<res;

    return 0;
}
