//ARRAY IMPLEMENTATION OF STACK

#include<iostream>

using namespace std;


struct mystack{
int top;
int capacity;
int * arr;
};

void push(mystack ** S,int val)
{
if((*S)->top == (*S)->capacity-1)
{cout<<"Stack Overflow\n";
return;}
(*S)->arr[++(*S)->top] = val;
return;
}

void pop(mystack ** S)
{
if((*S)->top == -1)
{cout<<"Stack Underflow\n";
return;
}
(*S)->top--;
}

void top(mystack ** S)
{
cout<<(*S)->arr[(*S)->top];
}


int main(){
mystack * S;
S = new mystack;
S->top = -1;
S->capacity = 5;
S->arr = new int[S->capacity]; //COOL DYNAMIC ARRAY OF VARIABLE SIZE

push(&S,11);
push(&S,12);
push(&S,13);
push(&S,14);

pop(&S);

top(&S);

return 0;
}
