#include<iostream>
#include<string>

using namespace std;

int main(){

bool flag = true;
bool flag2 = true;

string mystring,rotated;

cin>>mystring>>rotated;

if(mystring.length() != rotated.length()) {cout<<"Length"<<0;return 0;}

for(int i=rotated.length()-2,j=0;j<rotated.length();j++)
{
//cout<<"Comparing "<<rotated[i]<<" and "<<mystring[j]<<endl;
    if(rotated[i] != mystring[j]) {flag = false;break;}
    i = (i+1)%mystring.length();
}

if(flag == false)
for(int i=2,j=0;j<rotated.length();j++)
{
//    cout<<"Comparing "<<rotated[i]<<" and "<<mystring[j]<<endl;
    if(rotated[i] != mystring[j]) {flag2 = false;break;}
    i = (i+1)%mystring.length();
}

if(flag || flag2) cout<<1;
else cout<<0;

return 0;
}
