#include <stdio.h>

//function declaration
int fibo(int n);

int main(){
	//variable declaration
	int n, f;

	//input
	printf("Enter n: ");
	scanf("%d", &n);

	//recursive
	f = fibo(n);
	printf("Recursive Fibo: %d\n", f);

	return 0;
}

//function definition
int fibo(int n){
	if(n <= 1)
		return n;
	else
		return fibo(n-1) + fibo(n-2);
}

