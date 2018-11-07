#include<stdio.h>

int fact(int n){
if(n<=1)
    return 1;
else
    return(n*fact(n-1));
}

int main(){

int n,i;
scanf("%d",&n);
i=fact(n);
printf("fact is %d",i);
return 0;}
