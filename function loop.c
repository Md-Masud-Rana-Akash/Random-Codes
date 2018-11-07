#include <stdio.h>
void print_value(int n)
{

  printf("The number is %d\n", n);

}

int main()
{
  int i;
    for(i=0;i<10;i++){
    print_value(i);}
 
  return 0;
}
