#include<iostream>
using namespace std;


int main(){
int capacity;

cin>>capacity;

int * arr;

arr = new int[capacity];

for(int i=0;i<capacity;i++)
    arr[i]=capacity-i;

for(int i=0;i<capacity;i++)
    cout<<arr[i]<<endl;






return 0;}
