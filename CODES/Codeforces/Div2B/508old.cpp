#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
    priority_queue<long long int> pq;

    long long int num,temp,lasteven;
    bool flag = false;
    string mystr,buffer,tempstr;
    cin>>num;
    int lastval = num%10;

    mystr = to_string(num);
    int lastval = mystr.length()-1;
    for(long long int i = 0; i<mystr.length(); i++)
    {
        buffer = mystr[i];
        temp = stoi(buffer);
        
        if(temp%2 == 0 && temp<lastval)
        {
            tempstr = mystr;
            swap(tempstr[mystr.length()-1],tempstr[i]);
            cout<<stoi(tempstr);
        }
        else if(temp%2 == 0 && temp>lastval)
        {
        	lasteven = i;
        }
    }

    if(flag)
    cout<<pq.top();
    else
    cout<<"-1";
    return 0;
}
