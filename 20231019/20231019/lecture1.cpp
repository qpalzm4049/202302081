#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	printf("�л��� �Է� : ");
	scanf_s("%d", &n);
	int* score;
	score = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		printf("�л� #%d-%d ���� �Է� : ",n, i);
		scanf_s("%d", score + i);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		printf("�л� #%d-%d ���� ��� : %d \n", n,i + 1, score[i]);
		sum += score[i];
	}
	printf("���� : %d\n", sum);
	printf("������� : %d\n", sum / n);
	
	return 0;
}