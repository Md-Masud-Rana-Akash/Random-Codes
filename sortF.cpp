#include <iostream>
#include <ctime>
#define TOTAL 9

using namespace std;

void swap(int *numbers, int from, int to)


   {
       int temp = numbers[from];
	numbers[from] = numbers[to];
	numbers[to] = temp;
   }





 int main(int argc,char *argv[])
{
	int numbers[] = {16,48,45,68,74,75,25,78,95};

	for(int i = 1; i < TOTAL; i++)
	{
		if(numbers[0] > numbers[i])
			swap(numbers, 0, i);

		for(int j = 0; j < i - 1; j++)
		{
			if(numbers[j] <= numbers[i] && numbers[i] <= numbers[j+1])
				swap(numbers, j+1, i);
		}
	}
	for(int i = 0; i < TOTAL; i++)
	{
		cout << numbers[i] << endl;
	}
	return 0;
}
