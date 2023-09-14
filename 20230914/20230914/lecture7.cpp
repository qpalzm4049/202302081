#include <stdio.h>

int main(void) {

	char season;

	printf("봄 = a\n");
	printf("여름 = s\n");
	printf("가을 = d\n");
	printf("겨울 = f\n");
	printf("계절 선택 : ");
	scanf_s("%c", &season);

	switch (season) {
	case 'A':
	case 'a':
		printf("따뜻한 봄");
		break;
	case 'S':
	case 's':
		printf("뜨거 여름");
		break;
	case 'D':
	case 'd':
		printf("시원한 가을");
		break;
	case 'F':
	case 'f':
		printf("추운 겨울");
		break;
	default:
		printf("잘못입력");
	}
	return 0;
}