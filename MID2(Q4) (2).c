#include<stdio.h>

int main(){
int r1,n2,r,n,i,sum;
printf("the number:");
scanf("%d",&n);
r1=n%10;
n2=n/10;
sum=0;
for(i=n2;r!=0;n2=n2/10){
    r=n2%10;
    sum=sum+r;}
    if(sum==r1)
        printf("pair");
        else printf("not pair");

        return 0;
}
