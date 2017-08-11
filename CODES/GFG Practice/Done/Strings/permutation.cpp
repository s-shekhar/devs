#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
 {
//int T; cin>>T;
 //while(T--)
 {
     string mystring;
     cin>>mystring;

    sort(mystring.begin(),mystring.end());

    cout<<mystring;

    while(next_permutation(mystring.begin(),mystring.end())) cout<<mystring<<endl;

 }
return 0;
}
