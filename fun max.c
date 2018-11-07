#include<stdio.h>

int max(int x[],int n)
{
    int i,max;
    max=0;
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        if (x[i]>max)
            max=x[i];
}
    return max;
}


int main()
{
    int n,x[100],c;
    scanf("%d",&n);
    c=max(x,n);
    printf("%d",c);
    return 0;

}

