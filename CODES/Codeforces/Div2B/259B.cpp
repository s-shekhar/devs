#include<iostream>

using namespace std;

int main()
{
    int sum[4]= {},k=1;

    int num[4][4];

    for(int j=0; j<3; j++)
        for(int i=0; i<3; i++)
        {
            cin>>num[i][j];
        }

num[2][2] = (num[0][1] + (2*num[0][2]) - num[2][1])/2;

int tot = num[2][0]+num[2][1]+num[2][2];
num[0][0] = tot - (num[0][1] + num[0][2]);
num[1][1] = tot - (num[1][0] + num[1][2]);

for(int j=0; j<3; j++)
    {
        {
            for(int i=0; i<3; i++)
                cout<<num[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
