#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	printf("학생수 입력 : ");
	scanf_s("%d", &n);
	int* score;
	score = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		printf("학생 #%d-%d 성적 입력 : ",n, i);
		scanf_s("%d", score + i);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		printf("학생 #%d-%d 성적 출력 : %d \n", n,i + 1, score[i]);
		sum += score[i];
	}
	printf("총점 : %d\n", sum);
	printf("평균점수 : %d\n", sum / n);
	
	return 0;
}