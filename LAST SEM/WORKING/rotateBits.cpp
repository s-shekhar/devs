#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int first = 0x80000000;
    int torotate,next=0,res;
    cout<<"How much to rotate\n";
    cin>>torotate;

    for(int i=0; i<torotate; i++)
    {
        if(n & first)
            next |= 1<<(torotate-i);

        n<<=1;

    }

res = n|next;
cout<<res;

    return 0;
}
