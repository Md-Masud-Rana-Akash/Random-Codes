#include<stdio.h>

int p(int x){
 int i,c;
 c=0;
    for(i=2;i<x;i++){
        if(x%i==0)
            c++;
    }
    if(c!=0)
        return 1;
    else
        return 0;
}
int main(){
int ans,n;

scanf("%d",&n);
ans=p(n);
}
