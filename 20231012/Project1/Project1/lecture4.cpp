#include <stdio.h>

void swap(int* pa, int* pb); 


int main(void) {

	int a = 500, b = 10;

	printf("swap 함수 전 a =%d b = %d", a, b);
	swap(&a, &b);

	printf("swap 함수 후 a =%d, b = %d", a, b);

	return 0;
}

void swap(int* pa, int *pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}