#include<stdio.h>

int main()
{ int i,j,s,o,n,c;
 char a[3][10];
 for(i=0;i<3;i++){
    for(j=0;j<10;j++){
        scanf("%s",a[i][j]);
    }
       }
    for(o=0;o<3;o++){
        n=strlen(a[o]);
        s=0;
     for(c=0;c<n;c++){

       if(a[o][0]=='A'||a[o][0]=='a')
            s++;
    }
 }
 printf("%d",s);
 return 0;
}
