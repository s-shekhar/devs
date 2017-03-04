#include<iostream>
#include<vector>


using namespace std;

int main()
{

vector <int> numbers;

int temp,arrsize;

cin>>arrsize;

for(int i=0;i<arrsize;i++)
{
cin>>temp;
numbers.push_back(temp);
}


for(int i=0;i<arrsize;i++)
{
cout<<numbers[i]<<" ";
}
return 0;
}
