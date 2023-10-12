#include <stdio.h>

void sort(int a_a[5]);
void swap(int* pa, int* ptemp);
int main(void) {

	int a[5] = { 5,4,1,2,3 };

	for (int i = 0; i < 5; i++)
		printf("%d  ", a[i]);
	printf("\n");
	sort(a);
	for (int i = 0; i < 5; i++)
		printf("%d  ", a[i]);
	printf("\n");
	return 0;
}

void sort(int a[5]) {

	int temp[5];
	for (int i = 0; i < 5; i++) {
		temp[i] = a[i];
	}
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (temp[i] > temp[j]) {
				int temp1 = temp[i];
				temp[i] = temp[j];
				temp[j] = temp1;
			}
		}
	}
	swap(temp, a);
}

void swap(int* pa, int* ptemp) {
	for (int i = 0; i < 5; i++) {
		int c = pa[i];
		pa[i] = ptemp[ i];
		ptemp[i] = c;
	}
}