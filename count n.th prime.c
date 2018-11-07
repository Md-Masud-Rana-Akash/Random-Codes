#include<stdio.h>

int main(){
int i,j,flag=1,count=0,num;
printf("enter number");
scanf("%d",&num);

for(j=2;j<=num;j++){
flag=1;

for(i=2;i<=j-1;i++){
if(j%i==0)
flag=0;}

if(flag==1)
count++;}
if(flag==1)

printf("number %d prime\n",count);
    else
        printf("not prime");
getch();

return 0;}
