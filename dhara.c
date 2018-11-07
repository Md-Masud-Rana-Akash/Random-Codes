#include<stdio.h>

int main(){
    int n,j,i,a,b,c;
    a=0;
    b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i*4)
        a=a+i;
    for(j=2;j<=n;j=j*4)
            b=b-i;

            c=a-b;
    printf("%d",c);
    return 0;}

