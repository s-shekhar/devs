#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int N,n,m;
    set<int> s;
    cin>>N;
    set<int> :: iterator it;

    for(int i=0;i<N;i++)
    {
        cin>>n,m;
        switch(n){

        case 1:
            s.insert(m);
            break;
        case 2:
            it = s.find(m);
            if(it!=s.end())
                s.erase(m);
            break;

        case 3:
            it = s.find(m);
            if(it!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }
    return 0;
}


