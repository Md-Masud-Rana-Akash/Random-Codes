#include<stdio.h>

int main(){
int i,flag=1,flag2=1,j,k,num,count_prime=0;
printf("enter your number:");
scanf("%d",&num);
for(i=2;i<num;i++)
    if(num%i==0)
        flag=0;
    if(flag==1)

for(j=2;j<num;j++){
    flag2=1;
 for(k=2;k<j-1;k++){
    if(j%k==0){
        flag2=0;
        break;
    }
 }
    if(flag2==1)
        count_prime++;
    printf("count_prime");}
    else
        printf("not prime");

        return 0;}
