#include<iostream>
#include<string>

using namespace std;

int main()
{
string mystring,dupstring;
int i,j=0;
cin>>mystring;


for(int i=0;i<mystring.length();i++)
{

if((mystring[i]>= 'A' &&  mystring[i]<= 'Z') || (mystring[i]>= 'a' &&  mystring[i]<= 'z'))
    {
    dupstring.push_back(mystring[i]);
    }
}
cout<<dupstring;

i=dupstring.length()-1;
j=0;

while(i>=0)
        {
        if((mystring[j]>= 'A' &&  mystring[j]<= 'Z') || (mystring[j]>= 'a' &&  mystring[j]<= 'z'))
            {
             mystring[j]=dupstring[i];
             i--;
            }
        j++;
        }

cout<<endl<<"Final string  "<<mystring;
return 0;
}
