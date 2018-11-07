#include<stdio.h>

int main(){
int i,x,a,n[100],c;
c=0;

scanf("%d",&x);

for(i=0;i<x;i++){
        scanf("%d",&n[i]);
        for(a=0;a<n;a++){
            if(i!=a){
                if(n[i]+n[a]==8)
                    c++;
            }
        }
}
printf("%d",c);
return 0;}

