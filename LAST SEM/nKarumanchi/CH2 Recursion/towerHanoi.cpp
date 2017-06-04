#include<iostream>
using namespace std;


void towerHanoi(int n,char from,char to,char aux)
{
if(n==0) return;

towerHanoi(n-1,from,aux,to); //Move n-1 block from "from" to "aux" via "to"
cout<<"Move the disk "<<n<<" from "<<from<<" to "<<to<<endl;
towerHanoi(n-1,aux,to,from); //Aux is the new source, destination is same as orginal auxiliary will be the initial source
}


int main()
{
towerHanoi(3,'S','D','A');

return 0;
}
