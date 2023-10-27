#include<stdio.h>
#define size 5
void main(){
int arr[size],i,sum,sumarray=0,num;
printf("Enter the %d elements",size-1);
for(i=0;i<size-1;i++){
   scanf("%d",&arr[i]);
}
sum=(size*(size+1))/2;
for(i=0;i<size-1;i++){
    sumarray+=arr[i];
}
num=sum-sumarray;
printf("missing no. is %d",num);
}
