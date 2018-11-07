#include<stdio.h>
#include<conio.h>

int main(){
    int x,*y;
y=&x;
x=1;
printf("value of y is %x\n",y);
printf("value of x is %d\n",x);
printf("ad of x is %x\n",&x);
return 0;}
