#include<stdio.h>

int facto(int a);

int main(void) {
	int n;
	printf("계산할 패고리얼 값 입력 : ");
	scanf_s("%d", &n);

	printf("%d", facto(n));

	return 0;
}

int facto(int a) {
	if (a == 0)
		return 1;
	int res = a * facto(a - 1);
}