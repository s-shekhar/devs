#include<iostream>
#include<string>

using namespace std;

int main()
{
	string num;
	int index = -1;
	cin>>num;


	for(int i=0;i<num.length();i++)
		{
			if(!((num[i]-'0')%2))
			{
                index = i;
			if(num[i]<num[num.length()-1])
				{
				index = i;
				break;
				}
		}
		}

		if(index==-1)
			cout<<"-1";
        else
		{
		swap(num[index],num[num.length()-1]);
		cout<<num;
        }
	return 0;
}
