#include<stdio.h>

int main(){

int number[5][5],r,c,value;
for(r=0;r<5;r++){
    for(c=0;c<5;c++){
        value=(r+1)*(c+1);
        printf("%d",value);
    }
    printf("\n");

}
return 0;}
