#include<iostream>
using namespace std;


int find(int parent[],int a)
{
    if parent[a]==-1 return a;
    else
        find(parent,parent[a]);

    return a
}


int main()
{
    int parent[100];

    for(int i=0;i<5;i++) parent[i]=-1;

    int arr[][5]= {    {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };




    return 0;
}
