#include<stdio.h>

int main(){
  char st[20];
  int flag=0,i,l;
  printf("enter any string\n");
  gets(st);
  l=strlen(st);
  for(i=0;i<l/2;i++)
     if(st[i]!=st[l-1-i])
     {
flag=1;
break;
     }
  if(flag==0)
    printf("yes is Palindrom");
  else
    printf("No not palindrom\n");
}
