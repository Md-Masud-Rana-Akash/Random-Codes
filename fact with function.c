#include<stdio.h>

int fact(int n){
int i,sum=1;
for(i=n;i>=1;i--)
    sum=sum*i;
    return sum;
}
int main(){
int sum,n;
printf("The number that you want to find its factorial:");
scanf("%d",&n);
sum=fact(n);
printf("factorial is %d",sum);
return 0;}
