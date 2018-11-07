#include<stdio.h>

void space(int x){
    int i;
    for(i=1;i<=x;i++)
        printf(" ");
    return;}
int main(){
    char n1[15],n2[15];
    int x;
    printf("enter two names then space number\n");
    scanf("%s%s%d",&n1,&n2,&x);
    printf("%s",n1);
    space(x);
    printf("%s",n2);
    return 0;}
