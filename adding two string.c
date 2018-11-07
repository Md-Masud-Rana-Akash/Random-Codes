#include<stdio.h>

int main()
{
    int i,ln;
    char s1[15],s2[15];

    scanf("%s%s",s1,s2);

    for(ln=0;s1[ln]!='\0';ln++);
    s1[ln]=' ';
    ln++;
    for(i=0;s2[i]!='\0';i++)
        s1[ln+i]=s2[i];
        s1[ln+i]=s2[i];

    printf("%s",s1);

   return 0;
}
