#include<iostream>
#include<string>

using namespace std;

int val(char c)
{
	if(c == 'I') return 1;
	if(c == 'V') return 5;
	if(c == 'X') return 10;
	if(c == 'L') return 50;
	if(c == 'C') return 100;
	if(c == 'D') return 500;
	if(c == 'M') return 1000;
}


int main(){
string roman;
int res =0 ;

cin>>roman;

if(roman.length()==1) {cout<<val(roman[0]); return 0;}

for(int i=0;i<roman.length();)
{
	if(val(roman[i+1])<val(roman[i])) {res += val(roman[i]); i++;}
	else{
		res += (val(roman[i+1])-val(roman[i]));
		i+=2;
	}
}
    cout<<res<<endl;
	return 0;
}
