#include<stdio.h>

float avg(float a,float b)
{   float s;
    s=a+b/2;
    return s;
}

int main()
{ float x,y,s;
printf("x:y:\n");
scanf("%f%f",&x,&y);
s=avg(x,y);
printf("%f",s);
}
