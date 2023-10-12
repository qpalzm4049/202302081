#include <stdio.h>

void swap(int* pa, int* pb); 


int main(void) {

	int a = 500, b = 10;

	printf("swap �Լ� �� a =%d b = %d", a, b);
	swap(&a, &b);

	printf("swap �Լ� �� a =%d, b = %d", a, b);

	return 0;
}

void swap(int* pa, int *pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}