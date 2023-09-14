#include <stdio.h>

int main(void) {

	int num;

	printf("숫자입력 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("%d는 짝수", num);
	else
		printf("%d는 홀수", num);

	return 0;
}