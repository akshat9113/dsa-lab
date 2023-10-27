#include<stdio.h>
void init(int nun[],int s){
    for(int i=0;i<n;i++)
    {
        num[1]=1+i
    }
}
void insert(num[], int s,int pos,int value){
    if(pos>s || pos<1)
    
}
int main(){
    int count,num,pos,size,value;
    int ch;
do{
printf("1............Initialization\n");
printf("............Insert\n");
printf("............Remove\n");
printf("............Show\n");
printf("............Exit\n");
printf("Enter the choice");
scanf("%d",&ch);
    switch(ch){
        case 1:
        init(num,pos);
        break;
        case 2:
        printf("Enter the no. to be inserted");
        scanf("%d",&num);
        printf("Enter the position to be inserted in");
        scanf("%d",&pos);

        break;
        case 3:
        
        break;
        case 4:
        
        break;
        case 5:
        
        break;
        default:
        printf("Invalid choice");
    }
    while(ch!=5)
}
return 0;
}