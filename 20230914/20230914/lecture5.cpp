#include <stdio.h>

int main(void) {

	int num;

	printf("�����Է� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("%d�� ¦��", num);
	else
		printf("%d�� Ȧ��", num);

	return 0;
}