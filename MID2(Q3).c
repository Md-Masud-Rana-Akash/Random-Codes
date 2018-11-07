#include<stdio.h>

int main(){
    int n,i,h_marks;
    char label;
     printf("student number:");
      scanf("%d",&n);
      int marks[n],count;
        h_marks=0;
        count=0;

        for(i=0;i<n;i++) {
                printf("marks:");
                scanf("%d",&marks[i]);
                if(marks[i]>h_marks)
                h_marks=marks[i];

            goto label;
                    label:

                    if(h_marks==marks[i])
                    count++;}
                    printf("student who got the higest number=%d\n",count);

         return 0; }
