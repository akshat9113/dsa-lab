#include<stdio.h>
#include<string.h>
#define SIZE 100
typedef struct stack
{
    int top;
    int data[SIZE];
}stack;

stack stk;

int isEmpty()
{
    return stk.top == -1;
}

int isFull()
{
    return stk.top == SIZE -1;
}

void push(int item)
{
    if(!isFull())
    {
        stk.top++;
        stk.data[stk.top] = item;
    }
}
int pop()
{
    if(!isEmpty())
    {
        return stk.data[stk.top--];
    }
}

int peep()
{
    if(!isEmpty())
    {
        return stk.data[stk.top];
    }
}

int calc(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '/':
        return a/b;
    case '*':
        return a*b;
    case '%':
        return a%b;
    }
}

int preFix(char expr[])
{

    int i=0;
    
    while(expr[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0){
        char s = expr[i];
        if(s>='0' && s<='9')
            push(s);
        else{
            char a = pop();
            char b = pop();
            char c = calc(a,b,s);
            push(c);
        }
        i--;
    }
    return stk.top;

}
int postFix(char expr[])
{
    int i=0;
    while(expr[i]!='\0')
    {
        char s = expr[i];
        if(s>='0' && s<='9')
            push(s);
        else{
            char b = pop();
            char a = pop();
            char c = calc(a,b,s);
            push(c);
        }
        i++;
    }
    return stk.top;

}

int main()
{
    stk.top = -1;
    char expr[100];
    printf("Enter any expression");
    gets(expr);
    
    return 0;
}