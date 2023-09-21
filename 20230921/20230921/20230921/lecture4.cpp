#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
	
int main(void)
{
	int count = 0, circlr = 0, per = 1;
	double x = 0;
	double y = 0;

	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;
		if (sqrt((x * x) + (y * y)) < 1)
			circlr++;
		if (count % 10000000 == 0) {
			printf("%d%%진행.. 원주율 : %lf", per, (double)4 * circlr / count);
				for (int j = 0; j < per / 5; j++ )
					printf("■");
				for (int k = 0; k < 20 - (per / 5); k++)
					printf("□");
			printf("\n");
			per++;
		}
	}
}