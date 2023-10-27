#include<stdio.h>
#define size 10
typedef struct stack{
int arr[size];
int Top;
}stack;
stack stk;
int IsEmpty(){
return stk.Top==-1;
}
int IsFull(){
return stk.Top==size-1;
}
void push(int num)
{
    if(!IsFull())
    {
        stk.Top++;
        stk.arr[stk.Top]=num;
    }
    else
        printf("Stack is full");
}
int peep(){
    return stk.arr[stk.Top];
}
int POP(){
if(!IsEmpty())
{
    int item;
    item=stk.arr[stk.Top];
    stk.Top--;
    return item;
}
else
{
    printf("Stack is empty");
    return 0;
}
}
void show(){
    if(!IsEmpty()){
    for(i=stk.top;i>=0;i--){
    printf("%d\n",stk.arr[i]);
}
}
else{
    printf("stack is empty");
}
}
int main(){
stk.Top=-1;
push(2);
push(3);
show();
return 0;
}
