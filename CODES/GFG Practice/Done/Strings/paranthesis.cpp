#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
    list<char> llist;

    string mystring;

    bool flag = false;

    cin>>mystring;

    for(int i=0; i<mystring.length(); i++)
    {
        if(mystring[i]=='{' || mystring[i]=='(' || mystring[i]=='[')
            {llist.push_front(mystring[i]);}

        else if(llist.front() == '{' && mystring[i] == '}' || llist.front() == '[' && mystring[i] == ']' || llist.front() == '(' && mystring[i] == ')')
                    llist.pop_front();
        else
        {
            cout<<"not balanced";
            flag = true;
            break;
        }
    }

    if(!flag && llist.empty()) cout<<"balanced"; else cout<<"not balanced";
    }
    return 0;
}
