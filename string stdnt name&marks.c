#include <stdio.h>

int main(){
char names[5][20];
int i,j,k;
int marks[10];
printf("names:\n");
for(i=0;i<5;i++){
 scanf("%s",&names[i]);}

 printf("marks:\n");

    for(i=0;i<5;i++){
    scanf("%d",&marks[i]);}

    for(i=0;i<5;i++){

                printf("name is %s and marks is %d\n",names[i],marks[i]);
}

return 0;
}

