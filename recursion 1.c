#include<stdio.h>
int arr[100];
void recursion(int i,int n)
{
    if(i==n)
          return;
    else
        {
          printf("%d ",arr[i]);
          recursion(i+1,n);
       }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    recursion(0,n);
    return 0;
}
