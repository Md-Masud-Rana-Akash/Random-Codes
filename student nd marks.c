#include<stdio.h>

int main(){
int n,sb,a,i,m,j;
scanf("%d%d",&n,&sb);
a=0;

for(i=1;i<=n;i++){
    for(j=1;j<=sb;j++){
        scanf("%d",&m);
        a=a+m;
    }
    if(a>=350)
        printf("pass\n");
        else if(a>=240)
            printf("2nd\n");
    else printf("fail\n");

}
return 0;}
