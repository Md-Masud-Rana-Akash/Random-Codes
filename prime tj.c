#include<stdio.h>

int main(){
int n,i,a;
a=0;
scanf("%d",&n);
for(i=2;i<n;i++)
    {
    if(n%i==0)
    a=a+1;
    }
    if(a==0)
        printf("prime");
    else
        printf("not prime");
    return 0;
    }
