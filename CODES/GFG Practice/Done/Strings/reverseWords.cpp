#include<string>
#include<iostream>
#include<list>
#include<vector>

using namespace std;

void callme(){// cout<<"\nIn Func\n";
    vector <string> v;

    int k=0,l=0;

    string mystring;

    cin>>mystring;

    l = mystring.length()-1;

    for(int i = mystring.length()-1; i>=0; i--)
    {
    if(mystring[i] == '.') {
            k=i+1;
            while(mystring[k]!='.' && mystring[k]!='\0') {cout<<mystring[k];k++;}
        cout<<".";
    }
    }
    k=0;
while(mystring[k]!='.' && mystring[k]!='\0') {cout<<mystring[k];k++;}
 //cout<<"\nExiting\n";
}



int main()
 {
int T; cin>>T;
 while(T--)
 {
    callme();
    cout<<endl;
 }
return 0;
 }
