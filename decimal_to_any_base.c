#include<stdio.h>

typedef n 10;
typedef struct stack{
     int s[n];
} Stack;

int push()

int convert(int num, int base){
    int arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int r;
    while(num!=0){
        r = num%base;
        push(s, arr[n]);
        num = num/10;
    }
}

int main(){
    int num, base;
    printf("Enter the decimal Number \n");
    scanf("%d", &num);
    printf("Enter the base for Conversion \n");
    scanf("%d", &base);
    convert(num, base);
}