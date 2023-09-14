#include <stdio.h>

int main(void) {

	for (int i = 1; i <= 5; i++) {
		if (i % 2 != 0) {
			printf("|  O  |\n");
		}
		else
			printf("|  X  |\n");
		if (i < 5)
			printf("-----------------------\n");
		for (int j = 1; j <= i; j++)
			printf("    ");
	}

	return 0;
}