#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
long double poles_num,len,res,temp,maxdist=0,maxindex;
vector<long double> poles;

cin>>poles_num>>len;

for(long double i=0;i<poles_num;i++){
cin>>temp;
poles.push_back(temp);
}

sort(poles.begin(),poles.end());

vector<long double> :: iterator it;

for(it=poles.begin();it!=poles.end();it++)
{
temp = *it-*(it-1);
if(temp>maxdist)
    {
        maxdist = temp;
        maxindex = *it;
    }
}

if(poles[0]!=0 && poles[0]>=(maxdist/2) || poles[poles_num-1]!=len && (len-(poles[poles_num-1]))>=(maxdist/2))
{
    res = max(poles[0],len-(poles[poles_num-1]));
    maxdist = res;
}
else
    res = maxdist/2;
cout.precision(20);
cout<<res;
return 0;
}


