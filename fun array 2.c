#include<stdio.h>

int total(int n[] )
{ int x,i,c;
    float d;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&n[i]);
            c=c+n[i];
    }
    d=c/x;
    return d;
}

int main()
{ int n[100];
    float ans;
    ans=total(n);
    printf("%f",ans);

    }
