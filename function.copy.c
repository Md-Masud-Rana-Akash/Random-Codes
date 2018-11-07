#include<stdio.h>

char stradd(char name[10])
{
   gets(name);
    printf(name);
    return;
}
int main(){
char name[10];
 printf("THE WORD\n");
    stradd(name);
    return 0;
}
