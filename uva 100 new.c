#include<stdio.h>

int main(){
int n,p,i;
int k=0;

scanf("%d",&n);
for(i=1;i<=16;i++){
    if(n==1)
        break;
    else if(n%2!=0){
        n=3*n+1;
        k++;}
    else n=n/2;
        k++;}
    printf("%d\n",k);

return 0;}
