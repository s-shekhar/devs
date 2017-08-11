#include<iostream>

using namespace std;

int main()
{

    long long int n,m,mi,mx;

    cin>>n>>m; //participants(n) and teams(m)

    if(m==1)
        {mi = mx = (n*(n-1))/2;
        cout<<mi<<" "<<mx;
        }
    else
        {
        long long int evenlystu = n/m;
        evenlystu = (evenlystu*(evenlystu-1))/2;
        long long int evenlyteams = m-(n%m);
        long long int tm1 = evenlyteams*evenlystu;
        long long int extrastu = (n/m)+1;
        extrastu = (extrastu*(extrastu-1))/2;
        long long int extrateams = n%m;
        long long int tm2 = extrateams*extrastu;
        mi = tm1 + tm2;
        mx = n-m+1;
        mx = (mx*(mx-1))/2;
        cout<<mi<<" "<<mx;
        }

    return 0;
}
