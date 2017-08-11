#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int num,t;
    string order;
    cin>>num>>t;
    cin>>order;

    for(int j=0; j<t; j++)
        for(int i=0; i<order.length(); i++)
        {
         //   cout<<"I is : "<<i<<endl;
            if(order[i]=='B' && order[i+1]=='G')
            {
                order[i+1]='B';
                order[i] = 'G';
                i++;
            }
        }

    cout<<order;
    return 0;
}
