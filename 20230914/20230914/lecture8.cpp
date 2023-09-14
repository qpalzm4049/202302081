#include <stdio.h>

int main(void) {

	int cnt, hap = 0;

	printf("정수입력 : ");
	scanf_s("%d", &cnt);

	for (int i = 1; i <= cnt; i++) {
		if (i % 2 != 0)
			hap += 1;
	}
	printf("%d", hap);
	return 0;
}