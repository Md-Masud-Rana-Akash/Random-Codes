#include<stdio.h>

int main(){
int n,i,a;
a=0;
scanf("%d",&n);

for(i=1;i<n;i++){
        if(n%i==0)
           a=a+i;}
            if(a==n)
            printf("yes p");
else
    printf("no");
        return 0;
}

