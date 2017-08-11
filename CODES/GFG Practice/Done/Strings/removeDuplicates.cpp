#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
    string mystring;

    set<char> myset;

    getline(cin,mystring);


    for(int i=0; i<mystring.length(); i++)
    {

        if(mystring[i] != ' ')
        {
        if(myset.find(mystring[i]) == myset.end()) myset.insert(mystring[i]);
        else continue;
        }
           cout<<mystring[i];
    }





    return 0;
}
