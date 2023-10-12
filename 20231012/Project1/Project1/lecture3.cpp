#include <stdio.h>

int main(void) {

	int score[5] = { 87, 92, 89, 98, 78 };
	int cnt;

	//printf("score[5] = { 87, 92, 89, 98, 78 } 배열 요소 출력\n");

	int* p_score = &score[1];

	for (cnt = 0; cnt < 3; cnt++) {
		printf("[%d]\n", *p_score);
		p_score++;
	}
	return 0;
}