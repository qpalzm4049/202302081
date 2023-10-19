#include <stdio.h>
#include <stdlib.h>
struct studunt {
	int sno;
	char name[10];
	int score;
};

int main(void) {

	int n;
	printf("학생수 입력 : ");
	scanf_s("%d", &n);
	struct studunt* std;
	std = (struct studunt*)malloc(sizeof(struct studunt) * n);
	for (int i = 0; i < n; i++) {
		printf("학생 #%d-%d 학번 입력 : ", n, i);
		scanf_s("%d", &(std[i]).sno);
	}
	for (int i = 0; i < n; i++) {
		printf("학생 #%d-%d 이름 입력 : ", n, i);
		scanf_s("%s", (std[i]).name,10);
	}
	for (int i = 0; i < n; i++) {
		printf("학생 #%d-%d 성적 입력 : ", n, i);
		scanf_s("%d", &(std[i]).score);
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			printf("학생 #%d-%d 성적 출력 : %d \n", n, i + 1, (std[i]).score);
			sum += std[i].score;
			}
		printf("총점 :%d", sum);
		return 0;
}