#include<iostream>
#include<stdio.h>
#include<list>
#include<queue>
#define PIC pair<int, char>

using namespace std;

int main()
{
    priority_queue< pair<int, char> > Q;
    Q.push({8,'A'});
    Q.push({4,'B'});
    Q.push({4,'S'});
    while(!Q.empty()){
        PIC a = Q.top();
        printf("%d %c\n", a.first, a.second);
        Q.pop();
    }

}
