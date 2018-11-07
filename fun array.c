#include<stdio.h>
#include<string.h>


int upper(char x[])
{   int i,c,p;
    p=strlen(x);
    c=0;
    for(i=0;i<p;i++){
        if(x[i]>='A'&&x[i]<='Z')
            c++;
    }
    return c;
}

int main()
{
    int y;
    char a[100];
    scanf("%s",a);
    y=upper(a);
    printf("%d",y);
}
