#include<stdio.h>

int main(void) {
	int n;

	printf("�⵵�Է� :");
	scanf_s("%d", &n);

	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
		printf("������");
	else
		printf("����ƴ�");
	return 0;
}