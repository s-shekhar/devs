#include<iostream>
#include<list>


using namespace std;


int main()
{
    int v;
    bool flag = true;

    int arr[][5] = {{0,-1,4,0,0},
        {0,0,3,2,2},
        {0,0,0,0,0},
        {0,1,5,0,0},
        {0,0,0,-3,0}
    };


    int verts=5,visited[100]= {};

    list <int> cycle;

    int shortest[100]= {999};

    for(int i=0; i<19; i++) shortest[i]=999;

    int pred[100];

    shortest[0]=0;

    for(int i=0; i<verts-1; i++)
    {
        for(int j=0; j<verts; j++)
            for(int k=0; k<verts; k++)
            {
                if(arr[j][k]!=0)
                {
                    //Relax J,K,arr[j][k]
                    //cout<<"shortest[k] "<<shortest[k]<<"shortest[j] "<<shortest[j]<<"arr jk "<<arr[j][k]<<endl;
                    if(shortest[k]>shortest[j]+arr[j][k])
                    {
                        shortest[k]=shortest[j]+arr[j][k];
                        pred[k]=j;
                    }
                }

            }

    }

    for(int i=0; i<verts; i++)
        cout<<"Shortest of"<<i<<" "<<shortest[i]<<endl;



    //FINDING NEGATIVE CYCLE
    for(int j=0; j<verts; j++)
        for(int k=0; k<verts; k++)
        {
            if(arr[j][k]!=0 && flag==true)
            {
                if(shortest[k]>shortest[j]+arr[j][k]) cout<<"Hai";
                /*{
                    v=k; //i.e V is on -ve cycle or reachable from it.
                    cout<<v<<endl;
                    flag = false;
                    break;
                }*/
            }

        }

return 0;
    while(visited[v]!=1)
    {

        visited[v]=1;
        v = pred[v];

    }

    int x = pred[v];

flag = true;

    cycle.push_back(v);
    cout<<v<<" pushed"<<endl;

    while(x!=v)
    {
        cycle.push_back(x);
        cout<<x<<" pushed"<<endl;
        x = pred[v];
    }

    /* list <int>::iterator q;

     for(q = cycle.begin();q!=cycle.end();q++)
         cout<<*q<<endl;

      */
    return 0;
}
