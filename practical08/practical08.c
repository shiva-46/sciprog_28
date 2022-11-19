#include <stdio.h>

int iterativeGCD(int, int);
int recursiveGCD(int, int);


int main(void) {
	int a, b, ierror;

	printf("\nplease input two positive integers: \n");
	ierror = scanf("%d %d", &a, &b);
	if (ierror != 2) { 
		printf("\nplease enter tow integers\n"); \
		return 1;
	}
	
	if(a<=0 || b<=0) {
		printf("\ninput numbers are not positive integers\n");
		return 1;
	}
	
	printf("\nIterativeGCD(%d, %d) = %d\n", a, b, iterativeGCD(a,b));
	printf("\nRecursiveGCD(%d, %d) = %d\n", a, b, recursiveGCD(a,b));
	
	return 0;
}

int iterativeGCD(int a, int b) {
	int temp;
	while (b !=0 ) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int recursiveGCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return recursiveGCD(b, a%b);
}
