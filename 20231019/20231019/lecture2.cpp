#include <stdio.h>
#include <stdlib.h>
struct studunt {
	int sno;
	char name[10];
	int score;
};

int main(void) {

	int n;
	printf("�л��� �Է� : ");
	scanf_s("%d", &n);
	struct studunt* std;
	std = (struct studunt*)malloc(sizeof(struct studunt) * n);
	for (int i = 0; i < n; i++) {
		printf("�л� #%d-%d �й� �Է� : ", n, i);
		scanf_s("%d", &(std[i]).sno);
	}
	for (int i = 0; i < n; i++) {
		printf("�л� #%d-%d �̸� �Է� : ", n, i);
		scanf_s("%s", (std[i]).name,10);
	}
	for (int i = 0; i < n; i++) {
		printf("�л� #%d-%d ���� �Է� : ", n, i);
		scanf_s("%d", &(std[i]).score);
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			printf("�л� #%d-%d ���� ��� : %d \n", n, i + 1, (std[i]).score);
			sum += std[i].score;
			}
		printf("���� :%d", sum);
		return 0;
}