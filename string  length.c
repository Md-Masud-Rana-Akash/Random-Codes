#include<stdio.h>

int main()
{
int ln;
char s[15];
printf("name?\n");
gets(s);
for(ln=0;s[ln]!='\0';ln++);
 printf("%d",ln);
return 0;
}
