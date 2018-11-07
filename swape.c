#include<stdio.h>

void swape(int *x,int *y){
    int a,b;
    //*y=*x;
    //*x=*y;
    x=&b;
    y=&a;
    printf("after swape x is %d\ny is %d",x,y);
}




int main(){
    int a=100,b=200,*x,*y;
   x=&a,y=&b;
   printf("before swape x is %d\ny is %d\n",x,y);
   swape(*x,*y);
   return 0;
}
