#include<stdio.h>
#define size 5
void main(){
int arr[size],i;
 printf("Enter the %d sorted elements",size-1);
for(i=0;i<size-1;i++){
   scanf("%d",&arr[i]);
}
printf("Enter the element to be inserted");
scanf("%d",&arr[size-1]);
for(i=size-1;i>0;i--){
    if(arr[i]<arr[i-1]){
        int t=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=t;
    }else{
    break;
    }
}
printf("\n Array is :\n");
for(i=0;i<size;i++)
    printf("%d",arr[i]);
}
