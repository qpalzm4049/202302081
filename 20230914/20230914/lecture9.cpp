#include<stdio.h>

int main(void) {
	int	cnt = 2, i = 1, gop;

	while (cnt <= 9) {
		if (cnt == 5) {
			cnt++;
			continue;
		}
		printf("%d´Ü\n", cnt);
		while (i <= 9) {
			printf("%d * %d = %d\n", cnt, i, cnt * i);
			i++;
		}
		i = 1;
		cnt++;
	}
	return 0;
}