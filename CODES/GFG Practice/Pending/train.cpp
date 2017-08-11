#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

    int siz;
    int arr[10000],dep[10000];
    cin>>siz;

    for(int i=0;i<siz;i++) cin>>arr[i];
    for(int i=0;i<siz;i++) cin>>dep[i];

    char prvs='a';
    int maxa=0,curra=0;
    int arrsiz = sizeof(arr)/sizeof(arr[0]);
    int depsiz = sizeof(dep)/sizeof(dep[0]);
    int i=0,j=0;
    while(i<siz && j<siz)
    {
        if(arr[i]<dep[j])
        {
            i++;
            if(prvs=='a')
            {
            curra++;
            maxa = max(maxa,curra);
            }
            prvs='a';
        }
        else
        {
            j++;
            prvs='d';
        }
    }


    cout<<maxa-1<<endl;
    }
    return 0;
}
