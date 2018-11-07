#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));
    ptr[0]=8;
    printf("%d",ptr[0]);
    free(ptr);
    return 0;
}
