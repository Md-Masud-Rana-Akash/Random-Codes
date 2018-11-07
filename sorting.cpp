#include<iostream>
#include<cstdio>
#include <ctime>
#include <cstdlib>
#define n 3

using namespace std;

     int main () {
       int i, j, a, number[n];
       int start_s=clock();

       time_t t;
	/*get the system time*/
	time(&t);
      srand((unsigned int) t);
   // printf("Enter the value of N \n");
   // scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
      // number[i]=1 + (rand() % 100);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;

            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);

        int stop_s=clock();
        cout <<start_s<< "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
}
