 #include<stdio.h>
void call(int *p1,int *p2)
{
    int tm;
    tm=*p1;
    *p1=*p2;
    *p2=tm;
}
int main()
{
    int x=5,y=10;
    call(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
