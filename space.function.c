#include<stdio.h>

void space(int x){
    int i;
    for(i=1;i<=x;i++)
printf(" ");
return;}

int main(){
int n1,n2,x;
scanf("%d%d%d",&n1,&n2,&x);
printf("%d",n1);
space(x);
printf("%d",n2);
return 0;}
