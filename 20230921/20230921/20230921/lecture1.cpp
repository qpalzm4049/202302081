#include<stdio.h>

int sosu(int a) {
	for (int i = a - 1; i > 1; i--) {
		if (a % i == 0) 
		return 0;
	}
	return 1;
}

int main(void) {
	int n;
	printf("소수이지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &n);

	printf("%d\n", sosu(n));
	return 0;
}