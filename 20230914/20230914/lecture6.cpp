#include <stdio.h>

int main(void) {
	int jumsu;

	printf("점수입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu < 0 || jumsu > 100)
		printf("잘못 입력\n");
	else if (jumsu >= 90)
		printf("A학점\n");
	else if (jumsu >= 80)
		printf("B학점\n");
	else if (jumsu >= 70)
		printf("C학점\n");
	else if (jumsu >= 60)
		printf("D학점\n");
	else
		printf("F학점\n");
	return 0;
}