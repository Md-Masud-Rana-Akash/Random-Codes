#include<stdio.h>
int main(){
int n,sum=1,i;

scanf("%d",&n);
for(i=n;i>=1;i--){
    sum=sum*i;}
    printf("fact is %d",sum);
    return 0;}
