#include<stdio.h>

int main(){
int p[2][2],q[2][2],r[2][2],i,j;
printf("ENTER  MAT 1:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&p[i][j]);}}

printf("ENTER MAT 2:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&q[i][j]);}}

printf("MAT 3:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        r[i][j]=p[i][j]+q[i][j];
printf(" %d",r[i][j]);}

printf("\n");}

return 0;}
