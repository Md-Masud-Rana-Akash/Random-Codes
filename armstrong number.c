#include<stdio.h>

int main(){
int number,i,sum,r;
printf("number");
scanf("%d",&number);
sum=0;
for(i=number;r!=0;number=number/10){
    r=number%10;
    sum=sum+(r*r*r);}
    if(sum==i)
    printf("armstrong number");
    else
        printf("not armstrong number");
    return 0;}

