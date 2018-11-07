#include<stdio.h>

int main(){
int i,num,sum=0;
printf("enter num:");
scanf("%d",&num);

if(num%2==0){
for(i=2;i<=num;i=i+2){
    sum=sum+i;}
    printf("sum is %d",sum);}
else{
    for(i=1;i<=num;i=i+2){
    sum=sum+i;}
    printf("sum is %d",sum);}
    return 0;}

